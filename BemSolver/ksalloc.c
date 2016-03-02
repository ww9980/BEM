
#include "ksalloc.h"
#define kmemoryblocksize 50000000
#define DOBLOCKSEARCH

blockheader *blockptr=0;
char *newmemptr;
unsigned long ksize=0;

void takememsnapshot(memsnapshot *memsnap){
	memsnap->blockptr=blockptr;	
	if(blockptr){
		memsnap->newmemptr=newmemptr;
		memsnap->ksize=ksize;
		memsnap->cnt=blockptr->cnt;
		memsnap->checksum=blockptr->checksum;
		blockptr->snapshotted++;
	}
}

void restorememsnapshot(memsnapshot *memsnap){
	if(!memsnap->blockptr) reuseallmem();
	else{
		blockptr=memsnap->blockptr;
		newmemptr=memsnap->newmemptr;
		ksize=memsnap->ksize;
		blockptr->cnt=memsnap->cnt;
		blockptr->checksum=memsnap->checksum;
		blockptr->snapshotted--;
		//todo give free snapshot if it is empty;
	}
}



void freeallmem(){
//#ifdef WIN32
	blockheader *ptr2;
	while(blockptr!=NULL){
		ptr2=blockptr->prec;
		free(blockptr);
		blockptr=ptr2;
	}
//#endif
	ksize=0;
}

void freeunusedmem(){
	
	blockheader *ptr2,*ptr3;//first free all successive unused memory
	if(!blockptr) return;
	ptr2=blockptr->succ;
	while(ptr2!=NULL) {
		ptr3=ptr2;
		ptr2=ptr2->succ;
		free(ptr3);
	}
	blockptr->succ=NULL;
	if(blockptr->cnt==0){
		if(blockptr->checksum!=0){
			fprintf(stderr, "reusemem checksum error! \n ");
			return;
		}
		else{
			if(blockptr->prec==NULL){//if we are the first block we can also delete it
				free(blockptr);
				blockptr=NULL;
				ksize=0;
				newmemptr=NULL;
			}
			else {
				newmemptr=((char *)blockptr)+sizeof(blockheader);
				ksize=blockptr->size-sizeof(blockheader);
			}
		}
	}
}

void reuseallmem(){
	blockheader *ptr2;
	while(1){
		ptr2=blockptr->prec;
		
		blockptr->cnt=0;
		blockptr->checksum=NULL;
		blockptr->snapshotted=0;
		
		if(!ptr2) break;
		blockptr=ptr2;
	}
	ksize=blockptr->size-sizeof(blockheader);
	newmemptr=((char *)blockptr)+sizeof(blockheader);
}

blockheader *findblock(void *adr){
	blockheader* ptr2=blockptr;
	while(!(adr>ptr2 && adr<(char*)ptr2+ptr2->size) && ptr2!=NULL) ptr2=ptr2->prec;
	return ptr2;
}
void insertblockafter(blockheader *blocktoinsert,blockheader *wheretoinsert){
	//take out block
	if(blocktoinsert->succ) blocktoinsert->succ->prec=blocktoinsert->prec;
	if(blocktoinsert->prec)	blocktoinsert->prec->succ=blocktoinsert->succ;

	if(wheretoinsert->succ) wheretoinsert->succ->prec=blocktoinsert;
	blocktoinsert->succ=wheretoinsert->succ;
	wheretoinsert->succ=blocktoinsert;
	blocktoinsert->prec=wheretoinsert;
}

void insertblockbefore(blockheader *blocktoinsert,blockheader *wheretoinsert){
	//take out block
	if(blocktoinsert->succ) blocktoinsert->succ->prec=blocktoinsert->prec;
	if(blocktoinsert->prec)	blocktoinsert->prec->succ=blocktoinsert->succ;

	if(wheretoinsert->prec) wheretoinsert->prec->succ=blocktoinsert;
	blocktoinsert->prec=wheretoinsert->prec;
	blocktoinsert->succ=wheretoinsert;
	wheretoinsert->prec=blocktoinsert;
}

int reusemem(void * adr){
	blockheader* ptr2;

	ptr2=findblock(adr);
	if(ptr2==NULL){
		fprintf(stderr, "reusemem freeing error! \n ");
		return 0;
	}
	ptr2->checksum-=(unsigned long) adr;
	ptr2->cnt--;

	if(ptr2->cnt==0){
		if(ptr2->checksum!=0){
			fprintf(stderr, "reusemem checksum error! \n ");
			return 1;
		}
		else{
			if(ptr2!=blockptr){
				if(!ptr2->snapshotted) insertblockafter(ptr2,blockptr);
			}
			else{
				newmemptr=(char*)blockptr+sizeof(blockheader);
				ksize=blockptr->size-sizeof(blockheader);
			}
		}
	}
	return 0;
}


void* kcalloc2(size_t size){
	char *ptr2;
	if(ksize<size+sizeof(void*)) {
		ptr2=malloc(kmemoryblocksize);
		if(ptr2==NULL) {
			fprintf(stderr, "kcalloc allocation error! size: %d \n ",size);
			return NULL;
		}
		memset(ptr2,0,kmemoryblocksize);
		(*((void**)ptr2))=blockptr;
		blockptr=ptr2;
		ksize=kmemoryblocksize;
		newmemptr=((char *)ptr2)+sizeof(void*);
	}
	ptr2=newmemptr;
	newmemptr+=size;
	ksize-=size+sizeof(void*);
	return ptr2;
}


void* newblock(size_t allocationsize,size_t size){
	blockheader *ptr2;
	ptr2=(blockheader*)malloc(allocationsize);
	if(ptr2==NULL) {
		freeunusedmem();
		ptr2=(blockheader*)malloc(allocationsize);
	}
	if(ptr2==NULL) {
		fprintf(stderr, "kcalloc allocation error! size: %d \n ",allocationsize);
		return NULL;
	}
	memset(ptr2,0,allocationsize);
	if(blockptr){
		if(blockptr->cnt==0 && !blockptr->snapshotted){//the current block is empty so we will move it after the new one
			insertblockbefore(ptr2,blockptr);
			ptr2->cnt=0;
			ptr2->checksum=NULL;
			ptr2->size=allocationsize;
			ptr2->snapshotted=0;
		}
		else{
			if(allocationsize<=kmemoryblocksize || blockptr->snapshotted ){//the current block is used so we will move new block after current one if we allocate a small block
				insertblockafter(ptr2,blockptr);
				ptr2->cnt=0;
				ptr2->checksum=NULL;
				ptr2->size=allocationsize;
				ptr2->snapshotted=0;
			}
			else{//the current block is used so we will move new block before current one if we allocate a big block which is already full
				insertblockbefore(ptr2,blockptr);
				ptr2->cnt=1;
				ptr2->checksum=(unsigned long)((char *)ptr2)+sizeof(blockheader);
				ptr2->size=allocationsize;
				ptr2->snapshotted=0;
				return ((char *)ptr2)+sizeof(blockheader);
			}
		}
	}
	else{//this is the first block
		ptr2->prec=NULL;
		ptr2->succ=NULL;
		ptr2->cnt=0;
		ptr2->checksum=NULL;
		ptr2->size=allocationsize;
		ptr2->snapshotted=0;
	}
	blockptr=ptr2;
	ksize=allocationsize-sizeof(blockheader);
	newmemptr=((char *)blockptr)+sizeof(blockheader);
	ptr2=newmemptr;

	newmemptr+=size;
	blockptr->cnt++;
	blockptr->checksum+=(unsigned long)ptr2;
	ksize-=size;
	return (void*)ptr2;
}

void* kcalloc23(size_t size){
	blockheader *ptr2;
	size_t allocationsize;
	if(ksize>=size) {
		ptr2=newmemptr;
		newmemptr+=size;
		blockptr->cnt++;
		blockptr->checksum+=(unsigned long)ptr2;
		ksize-=size;
		return (void*)ptr2;
	}
	else{
		if(size+sizeof(blockheader)<=kmemoryblocksize)
			allocationsize=kmemoryblocksize;
		else
			allocationsize=size+sizeof(blockheader);

		if(blockptr){
			if(blockptr->succ){//we can recycle
				ptr2=blockptr->succ;
#ifdef DOBLOCKSEARCH
				//search for block with adequate size
				while(ptr2->size<allocationsize){
					ptr2=ptr2->succ;
					if(ptr2==NULL) break;
				}
#else
				if(ptr2->size<allocationsize) ptr2=NULL;
#endif
				if(ptr2){//is size enough
					insertblockafter(ptr2,blockptr);
					blockptr=ptr2;


					ksize=blockptr->size-sizeof(blockheader);
					newmemptr=((char *)blockptr)+sizeof(blockheader);
					memset(newmemptr,0,ksize);
					blockptr->checksum=0;
					blockptr->cnt=0;
					ptr2=(blockheader*)newmemptr;
	
					newmemptr+=size;
					blockptr->cnt++;
					blockptr->checksum+=(unsigned long)ptr2;
					ksize-=size;
					return (void*)ptr2;
				}
				else{//insert block with adequate size
					return newblock(allocationsize,size);
				}
			}
			else{//we cannot recycle
				return newblock(allocationsize,size);
			}
		}
		else{//we have no blocks yet
			return newblock(allocationsize,size);
		}
	}

	
}

