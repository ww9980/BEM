//Written by Kilian Singer 18.1.2007

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <strstream> 
#include <fstream>
#include <cstdlib>
#include <strstream> 
#include <iomanip>

#ifdef WIN32
#include <io.h>
#include <process.h>
#else
#include <stdio.h>
#include <unistd.h>
#endif

using namespace std;
#include <TRegexp.h>
#include <TFile.h>
#include <TROOT.h>
#include <TAxis.h>
#include <TCint.h>
#include <ostream>



//#define CINTREDIRECTION


#include "ExpLog.h"

	//logfile.SaveExperiment(pathTo_FilesToCompile,RootExchange::pathToScript,RootExchange::experimentName)
std::ostream &Cout=std::cout;

	

ExpLog::ExpLog(TString LogFileName,bool doLogging):logging(false),overwrite(false){
	
	if(LogFileName=="") {
		LogFileName=TCint::GetCurrentMacroName();//until root 5.18
		//LogFileName=TInterpreter::Instance()->GetCurrentMacroName();//starting from root 5.20
		//if(LogFileName.EndsWith(".cxx",TString::ECaseCompare::kIgnoreCase)){
		if(LogFileName.EndsWith(".cxx",TString::kIgnoreCase)){
			LogFileName=LogFileName(0,LogFileName.Length()-4)+".gen";
		}
	}

	LogFileName.ReplaceAll("/","\\");
	int len=LogFileName.Length();
	if(len<=0) {
		LogFileName="c:\\temp";
		len=LogFileName.Length();
	}
	while((LogFileName[--len]!='\\') & (LogFileName[len]!='/') ) if(len==0) break;
	directory=LogFileName(0,len+1);
	filename=LogFileName(len+1,LogFileName.Length());

	outputdir=directory+filename+"\\";
	logfilename=directory+filename+".html";
	//these lines are needed so that cout works, System::Console works anyhow
#ifndef CINTREDIRECTION
	//freopen ("CONIN$", "rb", stdin);
	//freopen ("CONOUT$", "wb", stdout);
	//freopen ("CONOUT$", "wb", stderr);

#ifdef WIN32
	//WIN32 and linux compatibility (fz)
	stdoutnum=_dup(1);
	stderrnum=_dup(2);
#endif
	stdoutnum=dup(1);
	stderrnum=dup(2);
#endif
	
	readpath=directory;
	if(doLogging) Logging(doLogging);

}

ExpLog::~ExpLog(){
	Logging(false);
}

void ExpLog::Reset(){
	TitelCounter.clear();
	SessionCounter.clear();
	canvas.clear();
	graph.clear();
}

void ExpLog::Overwrite(bool overwrite2){
	overwrite=overwrite2;
}

void ExpLog::Append(bool doappend){
	if(append==true && doappend==false){//if we switch off append mode then we can forget all TitelCounter entries starting with outputdir
		CleanUpTitelCounter(outputdir);
	}
	append=doappend;
}

void ExpLog::CleanUpTitelCounter(TString outputdir2){
	map<TString, int>::iterator TitelCounterIt,old; // iterates over all devices		

	for (TitelCounterIt = TitelCounter.begin(); TitelCounterIt != TitelCounter.end();++TitelCounterIt ){
		
		if(TitelCounterIt->first.BeginsWith(outputdir)){
			TitelCounterIt->second=0; 
		}
		
	}
}

void ExpLog::SetLogFileName(TString LogFileName2){

	if(LogFileName2=="") {
		LogFileName2=TCint::GetCurrentMacroName();//until root 5.18
		//LogFileName2=TInterpreter::Instance()->GetCurrentMacroName();//starting from root 5.20
		if(LogFileName2.EndsWith(".cxx",TString::kIgnoreCase)){
			LogFileName2=LogFileName2(0,LogFileName2.Length()-4)+".gen";
		}
	}
	if(LogFileName2==""){

#ifdef WIN32
		//TODO (fz)
		TCHAR szPath[MAX_PATH];
	    GetModuleFileName( NULL, szPath, MAX_PATH );
		LogFileName2=szPath;
		if(LogFileName2.EndsWith(".exe",TString::kIgnoreCase)){
			LogFileName2=LogFileName2(0,LogFileName2.Length()-4)+".gen";
		}

#endif	
	}

	

	overwrite=false;
	logging=false;
	
	AbsoluteFileName(LogFileName2,outputdir);
	if(outputdir=="") {
		outputdir=gSystem->pwd();
		outputdir+="\\noname";
	}
	outputdir.ReplaceAll("/","\\");
	int len=outputdir.Length();
	while((outputdir[--len]!='\\') & (outputdir[len]!='/') ) if(len==0) break;
	directory=outputdir(0,len+1);
	filename=outputdir(len+1,outputdir.Length());

	outputdir=directory+filename+"\\";
	logfilename=directory+filename+".html";
	
}
void ExpLog::SetReadPath(TString Path){
	TString filename;
	//if((Path[Path.Length()-1]!='/') || (Path[Path.Length()-1]!='\\')) Path+='/';
	AbsoluteFileName(Path,directory,filename);
	cout <<"Setting read path: "<<filename.Data()<<"\n";
	readpath=filename;
}

bool ExpLog::Logging(bool logging2){
	if(logging && !logging2) {
		return StopRedirection();
	}
	if(!logging && logging2){
		return StartRedirection();
	}
	
}

bool ExpLog::StartRedirection(){
	TString outputdir2(outputdir(0,outputdir.Length()-1));

   
   if(SessionCounter.find(outputdir)==SessionCounter.end() || !append ||overwrite) {//If first session or we should not append
		sectionname="";
		//TitelCounter.clear();
		SessionCounter[outputdir]=1;
		if(!overwrite){
			
			
			int cnt=2;
			
			while(gSystem->mkdir(outputdir)!=0) outputdir=outputdir2+long(cnt++)+"/";
			if(cnt!=2){
				cnt--;
				SessionCounter[outputdir]=cnt;
				filename=filename+long(cnt);
				logfilename=directory+filename+".html";
			}
		}
		else {//Overwrite
			CleanUpTitelCounter(outputdir);
			TString cmd(".! rd /s /q \"");//windows specific!!
			cmd+=outputdir+"\" >&NUL";
			
			int retval;
	
			gROOT->ProcessLine( cmd, &retval );

#ifdef WIN32
			DeleteFile((LPSTR)logfilename.Data());
			/*TString delme=directory+"delme";
			gSystem->mkdir(delme.Data());*/
#else
			unlink(logfilename.Data());
#endif			
			gSystem->mkdir(outputdir);
			//Todo delete files here
		}
	}
	else{//Appendinf a further session
		int cnt=SessionCounter[outputdir];
		if (cnt!=1){
			outputdir=outputdir2+long(cnt)+"/";
			filename=filename+long(cnt);
			logfilename=directory+filename+".html";
		}
	}
	bool redirected=false;
	//if ((fpin = freopen("c:\\stdin.txt","rt",stdin)) != NULL)
	//   in_redirected = true;
	
#ifndef CINTREDIRECTION
	FILE *ftemp;
	//if(SessionCounter[outputdir]==0) ftemp=fopen(logfilename,"w");//deletes file
	//else 
	ftemp=fopen(logfilename,"a");
	if(ftemp) fclose(ftemp);
	
	if ((fpout = freopen(logfilename,"at",stdout)) != NULL) redirected=true;
	//if ((fperr = freopen(logfilename,"at",stderr)) != NULL) redirected=redirected & true;
	
	setvbuf(stdout,(char*)NULL,_IONBF,0);/* Set non-buffered output on stdout */
	setvbuf(stderr,(char*)NULL,_IONBF,0);/* Set non-buffered output on stdout */
	//gROOT->ProcessLine(TString(".>>")+logfilename);
	//gROOT->ProcessLine("TString(".2>>")+logfilename");

	cout <<"<hr><big> Starting Log: "<<outputdir.Data()<<"</big><br><pre>\n";
#endif
	logging =true;
	return redirected;
}

bool ExpLog::StopRedirection(){
	if(logging){
		cout <<"</pre>";
		#ifndef CINTREDIRECTION
		cout.flush();
		cerr.flush();
		fflush(stderr);
		fflush(stdout);	
		bool success; 

#ifdef WIN32
		success=_dup2(stdoutnum,1)==0;
		//success=success && (_dup2(stderrnum,2)==0);	

		flushall();
#else
		success = dup2(stdoutnum,1)==0;
#endif
		gROOT->ProcessLine(".>");
		//gROOT->ProcessLine(".2>");
		logging=false;
		return success;
	}
	else return true;
#else
	return true;
#endif
}

void ExpLog::Finish(){
	StopRedirection();
}

int ExpLog::ReadCSV(TString filename2,double y[],int num,int skiplines,int skipchars){
	TString filename;
	AbsoluteFileName(filename2,readpath,filename);
	char line[1000];
	int i,i2,pos,len;
	ifstream infile(filename);
	TString filenamehtml=TString("file:///")+filename;
	
	if(logging)	cout <<"</pre>Reading XY file: <a href=\""<<filenamehtml.Data()<<"\">"<<filename.Data()<<"</a><pre>\n";
	else cout <<"Reading Y file: "<<filename.Data()<<"\n";
	double val[2];
	if(!infile) {
		cerr <<"FileIOError: Input File "<<filename<<" cannot be opened!"<<endl;
		return -1;
	}
	for(i=1;i<=skiplines;i++)			//skip header of file
		infile.getline(line,1000);

//	TRegexp regexp("[-]?[0123456789]+\.[0123456789]+[eE]?[-]?[0123456789]+");
	long row=0;
	while(infile.getline(line,1000)){
			
			strstream inout;
			char c;
			inout <<line;
			for(i2=0;i2<skipchars;i2++) inout>>c;
				
			//inout >>x[row];
			
			//do{inout>>c;}while(c!=',');
				
			inout >>y[row];
			row++;
			if(row>=num){
				cerr<<"Error in ExpLog::ReadCSV array index out of bound!\n";
				row=-1;
				break;
			}
		
	}
	return row;
}

int ExpLog::ReadCSV(TString filename2,double x[],double y[],int num,int skiplines,int skipchars){
	TString filename;
	AbsoluteFileName(filename2,readpath,filename);
	char line[1000];
	int i,i2,pos,len;
	ifstream infile(filename);
	filename.ReplaceAll('\\','/');
	TString filenamehtml=TString("file:///")+filename;
	
	if(logging)	cout <<"</pre>Reading XY file: <a href=\""<<filenamehtml.Data()<<"\">"<<filename.Data()<<"</a><pre>\n";
	else cout <<"Reading XY file: "<<filename.Data()<<"\n";
	double val[2];
	if(!infile) {
		cerr <<"FileIOError: Input File "<<filename<<" cannot be opened!"<<endl;
		return -1;
	}
	for(i=1;i<=skiplines;i++)			//skip header of file
		infile.getline(line,1000);

//	TRegexp regexp("[-]?[0123456789]+\.[0123456789]+[eE]?[-]?[0123456789]+");
	long row=0;
	while(infile.getline(line,1000)){
			
			strstream inout;
			char c;
			inout <<line;
			for(i2=0;i2<skipchars;i2++) inout>>c;
				
			inout >>x[row];
			
			do{inout>>c;}while(c!=',');
				
			inout >>y[row];
			row++;
			if(row>num){
				cerr<<"Error in ExpLog::ReadCSV array index out of bound!\n";
				row=-1;
				break;
			}
		
	}
	return row;
}
bool ExpLog::WriteCSV(TString filename2,double y[],int n){
char str[10],str2[10];
	strstream inout;
	//inout.setf(ios::right); inout.fill('0'); inout.width(5);
	if(TitelCounter[outputdir+"/"+sectionname]!=1){
		inout <<TitelCounter[outputdir+"/"+sectionname];
		inout >>str;
	}
	else str[0]=0;

	TString expandedfilename;
	if(sectionname!="") expandedfilename=sectionname+str+"."+filename2;
	else expandedfilename=filename2;
	TitelCounter[outputdir+"+"+expandedfilename]++;
	strstream inout2;
	if(TitelCounter[outputdir+"+"+expandedfilename]!=1){
		inout2 <<TitelCounter[outputdir+"+"+expandedfilename];
		inout2 >>str2;
	}
	else str2[0]=0;
	TString fullname=outputdir+expandedfilename+str2+".csv";		
	TString fullnamehtml=filename+"/"+expandedfilename+str2+".csv";
	
	fullname.ReplaceAll('\\','/');
		
	if(logging)	cout <<"</pre>Writing Y file: <a href=\""<<fullnamehtml.Data()<<"\">"<<fullnamehtml.Data()<<"</a><pre>\n";
	else cout <<"Writing XY file: "<<fullname.Data()<<"\n";

	ofstream file(fullname);
	if(!file) {
		cerr <<"FileIOError: Output File "<<fullname<<" cannot be opened for writing!"<<endl;
		return false;
	}
	file.precision(16);
	file <<scientific;
	for(int i=0;i<n;i++){
		file <<y[i]<<endl;
	}
	file.close();
	return true;
}
bool ExpLog::WriteCSV(TString filename2,double x[],double y[],int n){
	char str[10],str2[10];
	strstream inout;
	//inout.setf(ios::right); inout.fill('0'); inout.width(5);
	
	if(TitelCounter[outputdir+"/"+sectionname]!=1){
		inout <<TitelCounter[outputdir+"/"+sectionname];
		inout >>str;
	}
	else str[0]=0;

	TString expandedfilename;
	if(sectionname!="") expandedfilename=sectionname+str+"."+filename2;
	else expandedfilename=filename2;
	TitelCounter[outputdir+"+"+expandedfilename]++;
	strstream inout2;
		if(TitelCounter[outputdir+"+"+expandedfilename]!=1){
		inout2 <<TitelCounter[outputdir+"+"+expandedfilename];
		inout2 >>str2;
	}
	else str2[0]=0;
	TString fullname=outputdir+expandedfilename+str2+".csv";		
	TString fullnamehtml=filename+"/"+expandedfilename+str2+".csv";
	
	fullname.ReplaceAll('\\','/');
		
	if(logging)	cout <<"</pre>Writing XY file: <a href=\""<<fullnamehtml.Data()<<"\">"<<fullnamehtml.Data()<<"</a><pre>\n";
	else cout <<"Writing XY file: "<<fullname.Data()<<"\n";

	ofstream file(fullname);
	if(!file) {
		cerr <<"FileIOError: Output File "<<fullname<<" cannot be opened for writing!"<<endl;
		return false;
	}
	file.precision(16);
	file <<scientific;
	for(int i=0;i<n;i++){
		file <<x[i]<<","<<y[i]<<endl;
	}
	file.close();
	return true;
}


bool ExpLog::WriteCSV(TString graphtitel){return true;}


int ExpLog::ReadTSV(TString filename2,double y[],int num,int skiplines,int skipchars){
	TString filename;
	AbsoluteFileName(filename2,readpath,filename);
	char line[1000];
	int i,i2,pos,len;
	ifstream infile(filename);
	TString filenamehtml=TString("file:///")+filename;
	
	if(logging)	cout <<"</pre>Reading XY file: <a href=\""<<filenamehtml.Data()<<"\">"<<filename.Data()<<"</a><pre>\n";
	else cout <<"Reading Y file: "<<filename.Data()<<"\n";
	double val[2];
	if(!infile) {
		cerr <<"FileIOError: Input File "<<filename<<" cannot be opened!"<<endl;
		return -1;
	}
	for(i=1;i<=skiplines;i++)			//skip header of file
		infile.getline(line,1000);

//	TRegexp regexp("[-]?[0123456789]+\.[0123456789]+[eE]?[-]?[0123456789]+");
	long row=0;
	while(infile.getline(line,1000)){
			
			strstream inout;
			char c;
			inout <<line;
			for(i2=0;i2<skipchars;i2++) inout>>c;
				
			//inout >>x[row];
			
			//do{inout>>c;}while(c!=',');
				
			inout >>y[row];
			row++;
			if(row>=num){
				cerr<<"Error in ExpLog::ReadCSV array index out of bound!\n";
				row=-1;
				break;
			}
		
	}
	return row;
}

int ExpLog::ReadTSV(TString filename2,double x[],double y[],int num,int skiplines,int skipchars){
	TString filename;
	AbsoluteFileName(filename2,readpath,filename);
	char line[1000];
	int i,i2,pos,len;
	ifstream infile(filename);
	filename.ReplaceAll('\\','/');
	TString filenamehtml=TString("file:///")+filename;
	
	if(logging)	cout <<"</pre>Reading XY file: <a href=\""<<filenamehtml.Data()<<"\">"<<filename.Data()<<"</a><pre>\n";
	else cout <<"Reading XY file: "<<filename.Data()<<"\n";
	double val[2];
	if(!infile) {
		cerr <<"FileIOError: Input File "<<filename<<" cannot be opened!"<<endl;
		return -1;
	}
	for(i=1;i<=skiplines;i++)			//skip header of file
		infile.getline(line,1000);

//	TRegexp regexp("[-]?[0123456789]+\.[0123456789]+[eE]?[-]?[0123456789]+");
	long row=0;
	while(infile.getline(line,1000)){
			
			strstream inout;
			char c;
			inout <<line;
			for(i2=0;i2<skipchars;i2++) inout>>c;
				
			inout >>x[row];
			
			//do{inout>>c;}while(c!='\t');
				
			inout >>y[row];
			row++;
			if(row>num){
				cerr<<"Error in ExpLog::ReadCSV array index out of bound!\n";
				row=-1;
				break;
			}
		
	}
	return row;
}
bool ExpLog::WriteTSV(TString filename2,double y[],int n){
char str[10],str2[10];
	strstream inout;
	//inout.setf(ios::right); inout.fill('0'); inout.width(5);
	if(TitelCounter[outputdir+"/"+sectionname]!=1){
		inout <<TitelCounter[outputdir+"/"+sectionname];
		inout >>str;
	}
	else str[0]=0;

	TString expandedfilename;
	if(sectionname!="") expandedfilename=sectionname+str+"."+filename2;
	else expandedfilename=filename2;
	TitelCounter[outputdir+"+"+expandedfilename]++;
	strstream inout2;
	if(TitelCounter[outputdir+"+"+expandedfilename]!=1){
		inout2 <<TitelCounter[outputdir+"+"+expandedfilename];
		inout2 >>str2;
	}
	else str2[0]=0;
	TString fullname=outputdir+expandedfilename+str2+".tsv";		
	TString fullnamehtml=filename+"/"+expandedfilename+str2+".tsv";
	
	fullname.ReplaceAll('\\','/');
		
	if(logging)	cout <<"</pre>Writing Y file: <a href=\""<<fullnamehtml.Data()<<"\">"<<fullnamehtml.Data()<<"</a><pre>\n";
	else cout <<"Writing XY file: "<<fullname.Data()<<"\n";

	ofstream file(fullname);
	if(!file) {
		cerr <<"FileIOError: Output File "<<fullname<<" cannot be opened for writing!"<<endl;
		return false;
	}
	file.precision(16);
	file <<scientific;
	for(int i=0;i<n;i++){
		file <<y[i]<<endl;
	}
	file.close();
	return true;
}
bool ExpLog::WriteTSV(TString filename2,double x[],double y[],int n){
	char str[10],str2[10];
	strstream inout;
	//inout.setf(ios::right); inout.fill('0'); inout.width(5);
	
	if(TitelCounter[outputdir+"/"+sectionname]!=1){
		inout <<TitelCounter[outputdir+"/"+sectionname];
		inout >>str;
	}
	else str[0]=0;

	TString expandedfilename;
	if(sectionname!="") expandedfilename=sectionname+str+"."+filename2;
	else expandedfilename=filename2;
	TitelCounter[outputdir+"+"+expandedfilename]++;
	strstream inout2;
		if(TitelCounter[outputdir+"+"+expandedfilename]!=1){
		inout2 <<TitelCounter[outputdir+"+"+expandedfilename];
		inout2 >>str2;
	}
	else str2[0]=0;
	TString fullname=outputdir+expandedfilename+str2+".tsv";		
	TString fullnamehtml=filename+"/"+expandedfilename+str2+".tsv";
	
	fullname.ReplaceAll('\\','/');
		
	if(logging)	cout <<"</pre>Writing XY file: <a href=\""<<fullnamehtml.Data()<<"\">"<<fullnamehtml.Data()<<"</a><pre>\n";
	else cout <<"Writing XY file: "<<fullname.Data()<<"\n";

	ofstream file(fullname);
	if(!file) {
		cerr <<"FileIOError: Output File "<<fullname<<" cannot be opened for writing!"<<endl;
		return false;
	}
	file.precision(16);
	file <<scientific;for(int i=0;i<n;i++){
		file <<x[i]<<"\t"<<y[i]<<endl;
	}
	file.close();
	return true;
}


bool ExpLog::WriteTSV(TString graphtitel){
	return false;

}


void ExpLog::Graph(TString graphtitel,double x[],double y[],int num,TString xtitle,TString ytitle,TString linestyle,int color,double xstart,double xstop,double ystart,double ystop,int linewidth,int markerstyle){
	TString axis="A";
	TGraph *&g=graph[outputdir+"/"+graphtitel];
	TCanvas *&c=canvas[outputdir+"/"+graphtitel];

	if(c==0) c= new TCanvas(graphtitel, graphtitel, 100, 100, 800, 600);
	if(g==0) g= new TGraph(num,x,y);
	else{ 
		delete g;
		g= new TGraph(num,x,y);
	}
	
	c->cd();
	c->Clear();



	g->SetTitle(graphtitel);
	g->SetLineColor(color);
	g->SetMarkerColor(color);
	g->SetMarkerStyle(markerstyle);//1
	g->SetLineWidth(linewidth);

	//g->DrawGraph(num,x,y,axis+linestyle);
	
	g->GetXaxis()->SetTitle(xtitle);
	if(xstart!=xstop) g->GetXaxis()->SetRange( xstart, xstop );

	g->GetYaxis()->SetTitle(ytitle);
	if(ystart!=ystop)  {
		//g->GetYaxis()->SetRange( ystart, ystop );
		g->SetMinimum(ystart);
		g->SetMaximum(ystop);
	}

	g->Draw(axis+linestyle);
	c->Update();

	gSystem->ProcessEvents();
}

void ExpLog::Graph(TString graphtitel,TString plotingraph,double x[],double y[],int num,TString linestyle,int color,int linewidth,int markerstyle){
/*	TString axis="";
	TGraph *&g=graph[outputdir+"/"+graphtitel];
	TCanvas *&c=canvas[outputdir+"/"+plotingraph];

	
	if(g==0) g= new TGraph;
	
	c->cd();
	g->SetLineColor(color);
	g->DrawGraph(num,x,y,axis+linestyle);
	c->Update();
	gSystem->ProcessEvents();

*/
		TString axis="";
	TGraph *&g=graph[outputdir+"/"+graphtitel];
	TCanvas *&c=canvas[outputdir+"/"+plotingraph];

	if(c==0) c= new TCanvas(graphtitel, graphtitel, 100, 100, 800, 600);
	if(g==0) g= new TGraph(num,x,y);
	else{ 
		delete g;
		g= new TGraph(num,x,y);
	}
	
	
	c->cd();
	



	g->SetTitle(graphtitel);
	g->SetLineColor(color);
	g->SetMarkerColor(color);\
	g->SetMarkerStyle(markerstyle);//1
	g->SetLineWidth(linewidth);

	//g->DrawGraph(num,x,y,axis+linestyle);
	

	g->Draw(axis+linestyle);
	c->Update();

	gSystem->ProcessEvents();
}

void ExpLog::CloseGraph(TString graphtitel=""){
	if (graphtitel=="") CloseAllGraphs();
	delete graph[outputdir+"/"+graphtitel];
	delete canvas[outputdir+"/"+graphtitel];
	graph[outputdir+"/"+graphtitel]=0;
	canvas[outputdir+"/"+graphtitel]=0;
} 

void ExpLog::CloseAllGraphs(){
	map<TString, TGraph*>::iterator graphIt; 
	map<TString, TCanvas*>::iterator canvasIt;

	//,canvasIt=canvas.begin()
	//,++canvasIt
	//&& (canvasIt != canvas.end()) )

	for (graphIt = graph.begin(); graphIt != graph.end()  ;++graphIt ){
		delete (*graphIt).second;
		graph[(*graphIt).first]=0;
	}

	for (canvasIt=canvas.begin(); canvasIt != canvas.end()  ;++canvasIt ){
		delete (*canvasIt).second;
		canvas[(*canvasIt).first]=0;
	}
	
} 

TCanvas *ExpLog::GetCanvas(TString graphtitel){
	return canvas[outputdir+"/"+graphtitel];
} 
TGraph *ExpLog::GetGraph(TString graphtitel){
	return graph[outputdir+"/"+graphtitel];
} 
void ExpLog::Print(TString graphtitel,TString typ){
	PrintCanvas(canvas[outputdir+"/"+graphtitel],graphtitel,typ);
}
void ExpLog::PrintCanvas(TCanvas *c, TString graphtitel,TString typ){
	char str[10],str2[10];
	strstream inout;
	//inout.setf(ios::right); inout.fill('0'); inout.width(5);

	if(TitelCounter[outputdir+"/"+sectionname]!=1){
		inout <<TitelCounter[outputdir+"/"+sectionname];
		inout >>str;
	}
	else str[0]=0;

	TString expandedfilename;
	if(sectionname!="") expandedfilename=sectionname+str+"."+graphtitel;
	else expandedfilename=graphtitel;
	TitelCounter[outputdir+"+"+expandedfilename]++;
	strstream inout2;
	if(TitelCounter[outputdir+"+"+expandedfilename]!=1){
		inout2 <<TitelCounter[outputdir+"+"+expandedfilename];
		inout2 >>str2;
	}
	else str2[0]=0;
	TString fullname=outputdir+expandedfilename+str2+"."+typ;
	TString fullnamegif=outputdir+expandedfilename+str2+".gif";
	TString fullnamehtml=filename+"/"+expandedfilename+str2+"."+typ;
	TString fullnamegifhtml=filename+"/"+expandedfilename+str2+".gif";
	
	fullname.ReplaceAll('\\','/');
	fullnamegif.ReplaceAll('\\','/');

	if(logging)	cout <<"</pre>Writing Graph: "<<fullnamehtml.Data()<<"<br><a href=\""<<fullnamehtml.Data()<<"\"><img src=\""<< fullnamegifhtml.Data() <<"\"></a><pre>\n";
	else cout <<"Writing Graph: "<<fullnamehtml.Data()<<"\n";
	c->Modified();
	c->Update();
	
	if(typ!="") {
		c->SetName("c1");
		c->Print(fullname);
		c->SetName(graphtitel);
		c->Print(fullnamegif);
	}
	else {
		typ="gif";//this means that html link is gif image itself
		c->Print(fullname);
	}
}

void ExpLog::Section(TString sectionname2){
	sectionname=sectionname2;
	TitelCounter[outputdir+"/"+sectionname]++;
	char str2[10];
	strstream inout2;
	if(TitelCounter[outputdir+"/"+sectionname]!=1){
		inout2 <<TitelCounter[outputdir+"/"+sectionname];
		inout2 >>str2;
	}
	else str2[0]=0;

	if(logging) cout <<"\n</pre><hr><big> Section: "<<sectionname.Data()<<str2<<"</big><br><pre>\n";
	else cout <<"\n_______________________________________________________\nSection: "<<sectionname.Data()<<str2<<"\n";
}

void ExpLog::AbsoluteFileName(TString fname,TString &absfile){
	AbsoluteFileName(fname,directory,absfile);
}


//fehler quelle SetReadPath nicht mit / beendet!
//vergessen in fname ./ anzugeben!
void ExpLog::AbsoluteFileName(TString fname,TString currentdirectory,TString &absfile){
	TString pwd=gSystem->pwd();

	fname.ReplaceAll("/","\\");
	absfile="";
	if( (fname(0,2)=="./") | (fname(0,2)==".\\") ){
		absfile=currentdirectory+fname(2,fname.Length()-2);
	}
	else if( (fname(0,3)=="../") | (fname(0,3)=="..\\") ){
		TString directory2(currentdirectory);
		do{
			fname=fname(3,fname.Length()-3);

			int len=directory2.Length()-1;
			while(directory2[--len]!='\\' & directory2[len]!='/') if(len==0) break;
			directory2=directory2(0,len+1);
		}while ((fname(0,3)=="../") | (fname(0,3)=="..\\") );
		absfile=directory2+fname;

	}
	else if( (fname(0,2)=="</") | (fname(0,2)=="<\\") ){
		TString directory2(currentdirectory);
		TString directoryending(fname(2,fname.Length()-2));

		gSystem->cd(directory2);

		int len=directoryending.Length();
		while((directoryending[--len]!='\\') & (directoryending[len]!='/') ) if(len==0) break;
		directoryending=directoryending(0,len+1);
		TString pwd1,pwd2;
		while(!gSystem->cd(directoryending)){
			pwd1=gSystem->pwd();
			gSystem->cd("..");
			pwd2=gSystem->pwd();
			if(pwd1==pwd2) break;
		}
		absfile=pwd2+"/"+fname(2,fname.Length()-2);
	}
	else absfile=fname;
#ifdef WIN32
	absfile.ReplaceAll("/","\\");
#else
	absfile.ReplaceAll("\\","/");
#endif
	gSystem->cd(pwd);
}



ExpLog logfile;

