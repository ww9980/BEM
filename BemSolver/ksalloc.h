#ifndef __KSALLOC_H
#define __KSALLOC_H

#pragma once


#ifdef __cplusplus
extern "C" {
#endif
#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct blockheader{
	struct blockheader *prec;
	struct blockheader *succ;
	unsigned long cnt;
	unsigned long checksum;
	unsigned long size;	
	int snapshotted;
};
typedef struct blockheader blockheader;

struct memsnapshot{
	blockheader *blockptr;
	char		*newmemptr;
	unsigned long cnt;
	unsigned long checksum;
	unsigned long ksize;	
};
typedef struct memsnapshot memsnapshot;

void* kcalloc2(size_t size); 
void freeallmem();
void freeunusedmem();
void reuseallmem();
int reusemem(void *);

void takememsnapshot(memsnapshot *memsnap);
void restorememsnapshot(memsnapshot *memsnap);




#ifdef __cplusplus
}
#endif

#endif