#include "stdafx.h"
#include "TRandom3.h"
#ifdef __CINT__
int ringTrap()  //put here the name of the file
{gSystem->Load("bemsolver.dll");return main(-1,NULL);}
class D3world;
class D3electrode;
#else
#include <TApplication.h>
#include <TString.h>
#include <TSystem.h>

#include "ExpLog.h"
#include "bem.h"
#include "bem2d.h"
#include <string.h>
#include <time.h>
#endif

D3world *wr;
#define ELCNT 5

D3electrode *eldrf,*eldc1,*eldc2;

//include editable scripts here
#ifndef __CINT__
#include "ringTrap_edit.cxx"
#else
void load(){int retval;gROOT->ProcessLine(".L ringTrap_edit.cxx", &retval );}
void unload(){int retval;gROOT->ProcessLine(".U ringTrap_edit.cxx", &retval );}
void u() {unload();}
void l() {load();}
#endif


int main(int argc, char* argv[]){
#ifndef __CINT__
	char *str=argv[0];TApplication theApp("App", &argc, argv);
#else
	load();
#endif
	
	logfile.SetLogFileName();
	logfile.Append(false); //funzt!!!!!!!!!
	logfile.Overwrite(true); //nicht auf true setzen sondern per hand loeschen
	logfile.Logging(false);

	TString savedworldfname;
	logfile.AbsoluteFileName(TString("./")+logfile.GetLogFileName()+".cache",savedworldfname);
	gSystem->mkdir(savedworldfname);
	logfile.AbsoluteFileName(TString("./")+logfile.GetLogFileName()+".cache/savedworld.data",savedworldfname);
	wr=new D3world(savedworldfname,0.00001,32,4,6,0.001);
	
	D3ImportedElectrodes *impel=new D3ImportedElectrodes();
	TString importfilename;
	logfile.AbsoluteFileName("./ringTrap.dxf",importfilename);
	if(!impel->Import(importfilename)) return 0;
	elrf=& (impel->FindElectrode("elrf"));
	eldc1=& (impel->FindElectrode("eldc1"));
	eldc2=& (impel->FindElectrode("eldc2"));
	
	

	wr->insert(elrf);
	wr->insert(eldc1);
	wr->insert(eldc2);
	
	wr->correctNorm(0,0,0);

	wr->draw();

	cout <<"Solving...";
	time_t zeit = clock();

	wr->solve();
	wr->SymmetrizeCharges(3);//Symmetry axis is z

	zeit -= clock();
	cout <<"done! ";
	cout << "in " << zeit/(-1000.0) << " seconds." << endl;
	

	int nz=500,ny=51,nx=51;
	
	double xstart=-1,xstop=1;
	double ystart=-1,ystop=1;
	double zstart=-5,zstop=5;
	
	
	int n;
	zeit = clock();
	cout <<"Calculating ...";

	wr->calc_slow(xstart,xstop,nx,ystart,ystop,ny,zstart,zstop,nz);
	zeit -= clock();
	cout <<"done! ";
	cout << "in " << zeit/(-1000.0) << " seconds." << endl;
	
	help();

	//setTrappingVoltage();

//PhaseScan(200);//hat phase=0.5 ergeben
//	Spot(0,0,0,0,1e-4);
//	Spot(0,0,0,0,2e-3);
	logfile.Finish();	
	
	//TString savedgeo;
	//logfile.AbsoluteFileName(TString("./")+logfile.GetLogFileName()+".cache/geometry.dat",savedgeo);
	//wr->exportGeometry(savedgeo.Data());
	

	//PlotPot(33,0,0,40,0,0,10);
	//PlotPot3(33,0,0,40,0,0,10);



#ifndef __CINT__
   while(false){
		gSystem->ProcessEvents();
		gSystem->Sleep(10);
	}
	theApp.Terminate();//root memory error workaround call before destructor of ExpJob can be called!
#endif
}

