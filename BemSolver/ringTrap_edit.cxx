void help(){
	cout <<endl;
	cout <<"___________________________________"<<endl;
	cout <<"command reference:"<<endl;
	cout <<"free(): free data"<<endl;
	cout <<"setTrappingVoltage()"<<endl;
	cout <<"setExtractionVoltage()"<<endl;
	cout <<"PlotPotdouble x1=33,double y1=0,double z1=0,double x2=70,double y2=0,double z2=0,int num=100,bool plotfield=false)"<<endl;
}
void free(){
	delete wr;
}

void setTrappingVoltage(double dcac=0,double dcbc=0,double rfac=0,double rfbc=0,double urf=0){
eldca[0]->SetVoltage(0+dcac);
eldca[1]->SetVoltage(1+dcac);
eldca[2]->SetVoltage(0+dcac);
eldca[3]->SetVoltage(1+dcac);
eldca[4]->SetVoltage(0+dcac);

eldcb[0]->SetVoltage(0+dcbc);
eldcb[1]->SetVoltage(1+dcbc);
eldcb[2]->SetVoltage(0+dcbc);
eldcb[3]->SetVoltage(1+dcbc);
eldcb[4]->SetVoltage(0+dcbc);

elrfa->SetVoltage(urf+rfac);
elrfb->SetVoltage(urf+rfbc);

}

void setZero(double dcac=0,double dcbc=0,double rfac=0,double rfbc=0,double urf=0){
eldca[0]->SetVoltage(0+dcac);
eldca[1]->SetVoltage(0+dcac);
eldca[2]->SetVoltage(0+dcac);
eldca[3]->SetVoltage(0+dcac);
eldca[4]->SetVoltage(0+dcac);

eldcb[0]->SetVoltage(0+dcbc);
eldcb[1]->SetVoltage(0+dcbc);
eldcb[2]->SetVoltage(0+dcbc);
eldcb[3]->SetVoltage(0+dcbc);
eldcb[4]->SetVoltage(0+dcbc);

elrfa->SetVoltage(urf+rfac);
elrfb->SetVoltage(urf+rfbc);

}

#define PI 3.141592653589793



double calcit(double x,double y,double z){
	double p,ex,ey,ez;
	wr->calc(x,y,z,p,ex,ey,ez);
	return p;
}

void ExportAxialPot(double zstart=-15,double zstop=15,double zcnt=3000){
	int elnum,cnt;
	double zpos;
	double *pot=new double[zcnt];
	double *xaxis=new double[zcnt];

	
	for(elnum=0;elnum<ELCNT;elnum++){
		setZero();
		eldca[elnum]->SetVoltage(-1);
		eldcb[elnum]->SetVoltage(-1);
		cnt=0;
		for(zpos=zstart;cnt<zcnt;zpos+=(zstop-zstart)/double(zcnt-1)){
			xaxis[cnt]=zpos;
			pot[cnt]=wr->calc_slow(0,0,zpos);
			cnt++;
			cout <<cnt<<endl;
		}
		logfile.Graph(TString("axialpot")+TString(elnum),xaxis,pot,zcnt,"z [mm]","pot [mm]","AL");
		logfile.WriteTSV(TString("axialpot")+TString(elnum),xaxis,pot,zcnt);
	}

	delete[] xaxis;
	delete[] pot;
}

void PlotPot(double x1=0,double y1=0,double z1=-5,double x2=0,double y2=0,double z2=5,int num=200,bool plotfield=true){
		//logfile.Section("PlotPot");
		//setTrappingVoltage();

		double *pot=new double[num];
		double *Ex=new double[num];
		double *Ey=new double[num];
		double *Ez=new double[num];
		double *xaxis=new double[num];
		double xstart=x1,xstop=x2;
		double ystart=y1,ystop=y2;
		double zstart=z1,zstop=z2;
		
		
		int n;



		for(n=0;n<num;n++) {
			wr->calc(xstart+(-xstart+xstop)/double(num-1)*n,
				     ystart+(-ystart+ystop)/double(num-1)*n,
					 zstart+(-zstart+zstop)/double(num-1)*n,
					 pot[n],Ex[n],Ey[n],Ez[n]);
			xaxis[n]=sqrt(pow(xstart+(-xstart+xstop)/double(num-1)*n,2)+
				     pow(ystart+(-ystart+ystop)/double(num-1)*n,2)+
					 pow(zstart+(-zstart+zstop)/double(num-1)*n,2));
			xaxis[n]=zstart+(-zstart+zstop)/double(num-1)*n;
				
		}
		//for(n=0;n<num;n++) Ex[n]*=Ex[n];
		logfile.Graph("axialcutpot",xaxis,pot,num,"x [mm]","Potential [V] ","AL");	
		
		//logfile.Graph("axialcutpot2","axialcutpot",xaxis,pot,num,"L",2);
		logfile.Print("axialcutpot");
		logfile.WriteTSV("axialcutpot");
		if(plotfield){
			logfile.Graph("axialcutEx",xaxis,Ex,num,"x","Ex","L");
			logfile.Print("axialcutEx");

			logfile.Graph("axialcutEy",xaxis,Ey,num,"x","Ey","L");
			logfile.Print("axialcutEy");

			logfile.Graph("axialcutEz",xaxis,Ez,num,"x","Ez","L");
			logfile.Print("axialcutEz");

		}
		delete[] xaxis;
		delete[] Ez;
		delete[] Ey;
		delete[] Ex;
		delete[] pot;
}

void Trajectory(double rfac=0.,double rfbc=0.,double dcac=0.,double dcbc=0.,double x=0,double y=0,double z=0.0,double vx=0,double vy=0,double vz=0,double stoptime=1000./12e6,int steps=500000,double RFVoltage=400./2.,double RFfreq=12155000){

	

	
	setTrappingVoltage();
	logfile.Logging(true);
	double h=stoptime/double(steps);
	int i;
	double xx[3]={x,y,z},vv[3]={vx,vy,vz};
	double *xpos=new double[steps]; 
	double *ypos=new double[steps];
	double *zpos=new double[steps];
	double *vxpos=new double[steps];
	double *vypos=new double[steps];
	double *vzpos=new double[steps];
	double *tpos=new double[steps];
	double t=0;
	double qDivM=2.41187e6; //Ca40+
	for(i=0;i<steps;++i){
		double Urf=RFVoltage*sin(2.*PI*RFfreq*t);
		setTrappingVoltage(dcac,dcbc,rfac,rfbc,Urf);
	
		xpos[i]=xx[0]-x;ypos[i]=xx[1];zpos[i]=xx[2];
		vxpos[i]=vv[0];vypos[i]=vv[1];vzpos[i]=vv[2];
		tpos[i]=t;

		wr->propagateForwardVerlet(xx,vv,h,qDivM);
		//wr->propagateForwardEuler(xx,vv,h,qDivM);
		t+=h;
	}
	xpos[steps-1]=xx[0]-x;ypos[steps-1]=xx[1];zpos[steps-1]=xx[2];
	vxpos[steps-1]=vv[0];vypos[steps-1]=vv[1];vzpos[steps-1]=vv[2];

	/*logfile.Graph("xpos",tpos,xpos,steps,"time [s]","x [mm]","AL");
	logfile.Print("xpos");
	logfile.Graph("ypos",tpos,ypos,steps,"time [s]","y [mm]","AL");
	logfile.Print("ypos");
	*/
	logfile.Graph("zpos",tpos,zpos,steps,"time [s]","z [mm]","AL");
	logfile.Print("zpos");
	/*
	logfile.Graph("vxpos",tpos,vxpos,steps,"time [s]","vx [mm/s]","AL");
	logfile.Print("vxpos");
	logfile.Graph("vypos",tpos,vypos,steps,"time [s]","vy [mm/s]","AL");
	logfile.Print("vypos");
	logfile.Graph("vzpos",tpos,vzpos,steps,"time [s]","vz [mm/s]","AL");
	logfile.Print("vzpos");*/

	logfile.Graph("x-y-pos",xpos,ypos,steps,"x [mm]","y [mm]","AL");
	logfile.Print("x-y-pos");
	logfile.WriteTSV("x-y-pos",xpos,ypos,i);
	logfile.Graph("x-z-pos",xpos,zpos,steps,"x [mm]","z [mm]","AL");
	logfile.Print("x-z-pos");
	logfile.WriteTSV("x-z-pos",xpos,zpos,i);
	logfile.Graph("y-z-pos",ypos,zpos,steps,"y [mm]","z [mm]","AL");

	logfile.Graph("x-vx-pos",xpos,vxpos,steps,"x [mm]","vx [??]","AL");

	logfile.Logging(false);
}
struct xv{
	double x;
	double y;
	double z;
	double vx;
	double vy;
	double vz;
};


//xv Extraction(double rf1c=0,double rf2c=0,double dc1c=0,double dc2c=0,double x=36.67199,double y=0,double z=0,double vx=0,double vy=0,double vz=0,double stoptime=500./12e6,int steps=50000,double RFVoltage=400./2.,double RFfreq=12155000,double startphase=0,double triggerphase=0,int phasecnt=20,bool doplot=true){





