#include "stdafx.h"
#include "TRandom3.h"
#include "TGraph2D.h"
#ifdef __CINT__
int linearPaulTrap()  //put here the name of the file
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

D3electrode *eldca[ELCNT],*eldcb[ELCNT],*elrfa,*elrfb;

//include editable scripts here
#ifndef __CINT__
#include "linearPaulTrap_edit.cxx"
#else
void load(){int retval;gROOT->ProcessLine(".L linearPaulTrap_edit.cxx", &retval );}
void unload(){int retval;gROOT->ProcessLine(".U linearPaulTrap_edit.cxx", &retval );}
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
	
		
	double radius=0.5,length=2,gap=4,smallgap=0.1;
	int sectors=24;
	elrfa=new D3electrode;
	elrfa->insert(new D3cylinder(radius,length*ELCNT,gap/2.,0,-length*ELCNT/2., 0,0,0,sectors));
	elrfa->SetSymmetry(false,true,false,false);
	wr->insert(elrfa);
	elrfb=new D3electrode;
	elrfb->insert(new D3cylinder(radius,length*ELCNT,-gap/2.,0,-length*ELCNT/2., 0,0,0,sectors));
	elrfb->SetSymmetry(false,true,false,false);
	wr->insert(elrfb);
	elrfa->SetSymmetryWith(true,false,false,false,elrfb);
	elrfb->SetSymmetryWith(true,false,false,false,elrfa);
	elrfa->SetSymmetryWith(true,true,false,false,elrfb);
	elrfb->SetSymmetryWith(true,true,false,false,elrfa);



	int i;
	for(i=0;i<ELCNT;i++){
		eldca[i]=new D3electrode;
		eldca[i]->insert(new D3cylinder(radius,length-smallgap,0.,gap/2.,-length*ELCNT/2.+length*double(i)+smallgap/2., 0,0,0,sectors));
		wr->insert(eldca[i]);
		eldca[i]->SetSymmetry(true,false,false,false);

		eldcb[i]=new D3electrode;
		eldcb[i]->insert(new D3cylinder(radius,length-smallgap,0.,-gap/2.,-length*ELCNT/2.+length*double(i)+smallgap/2., 0,0,0,sectors));
		wr->insert(eldcb[i]);
		eldcb[i]->SetSymmetry(true,false,false,false);

		eldca[i]->SetSymmetryWith(false,true,false,false,eldcb[i]);
		eldcb[i]->SetSymmetryWith(false,true,false,false,eldca[i]);
		eldca[i]->SetSymmetryWith(true,true,false,false,eldcb[i]);
		eldcb[i]->SetSymmetryWith(true,true,false,false,eldca[i]);
		
	}

	//wr->draw();
	

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

