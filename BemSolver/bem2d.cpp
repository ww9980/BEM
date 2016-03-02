//this is already done:
//to include fortran libraries read especially "Intel Fortran/C Mixed-Language Programs Overview" in Intel Visual Fortran User Guide Vol I
//but it also works without including libifcore.lib
//you just have to set in the ctest Project property tab at linker/input/additional dependencies to ..\Lib2\Debug\Lib2.lib or  ..\Lib2\Release\Lib2.lib
//and the linker/common/additional library directory to D:\Programme\Intel\Fortran\compiler80\IA32\LIB
//rightclick on Projectmappe to set dependencies and define the file to be debugged and started

//if linker does not find ifconsol.lib then change setting in properties of whole project/linker/allgemein/zusaetzliche bibliotheksverzeichnisse to the proper directory of the intel fortran compiler

// testlapack.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//in the fortran project:
//Remove "/libdir:noauto". In the project property pages, this is Fortran..Libraries..Disable default library search rules - change to "No".
//This setting, which is "Yes" by default in static library projects, tells the compiler to not include in the object file directives to pull in the run-time libraries. This is correct when the library is used by another Fortran project, but not when the main program is not Fortran.
//In order to avoid library collisions also Librarian..General..Ignore all default libraries to yes
//Take care that the project type in Fortran..Libraries is set to multithreaded debug/ multithreaded release respectively (if the current c project has the same settings)

#include <complex> //modified std::complex with inversed storage order or real and imag in order to comply with fftw_complex
using namespace std;
#include "bem2d.h"


D2element::D2element(double pts[][2]){
	int i;
	for(i=1;(pts[i][0]!=pts[0][0])||(pts[i][1]!=pts[0][1]);i++);
	points=(double2*)(new double[i+1][2]);
	cnt=i;
	for(i=0;i<=cnt;i++) {
		points[i][0]=pts[i][0];
		points[i][1]=pts[i][1];
	}
}

D2element::~D2element(){
	delete[] points;
}

void D2element::refine(int factor){
	double2 *target=(double2*)new double [cnt*factor][2];
	int i;
	double x0,x1,y0,y1;
	x0=points[0][0];
	y0=points[0][1];
	target[0][0]=x0;
	target[0][1]=y0;
	for(i=1;i<=cnt;i++){
		x1=points[i][0];
		y1=points[i][1];
		int interpol;
		for(interpol=1;interpol<factor;interpol++){
			double lambda=double(interpol)/double(factor);
			target[i*factor-2+interpol][0]=x1*lambda+x0*(1.-lambda);
			target[i*factor-2+interpol][1]=y1*lambda+y0*(1.-lambda);
		}
		target[i*factor-2+factor][0]=x1;
		target[i*factor-2+factor][1]=y1;
		x0=x1;
		y0=y1;
	}
	delete[] points;
	points=target;
	cnt=cnt*factor;
}

/*
#include <float.h>
#include <fftw3.h>
#include <gsl/gsl_sf_bessel.h>
#include <gsl/gsl_sf_ellint.h>
#include <math.h>
#include <gsl/gsl_integration.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_vector.h>
#include <gsl/gsl_linalg.h>
#include "stdafx.h"
#include "lapack.h"
#include <vector>
#include <list>

double bem2D::f(double x, void *params){
	double *p=(double *) params;
	double f=log(p[0]*x)/sqrt(x);
	return f;
} 

double bem2D::G_ax(double xi, void *params){
	double *p=(double *) params;
	double x0=p[0];
	double s0=p[1];
	double x1=p[2];
	double s1=p[3];
	double x2=p[4];
	double s2=p[5];
	
	double x=1./2.*(x2+x1)+1./2.*(x2-x1)*xi;
	double s=1./2.*(s2+s1)+1./2.*(s2-s1)*xi;
	double k=sqrt(4*s*s0/( sqr(x-x0)+sqr(s+s0)) );
	double f=gsl_sf_ellint_Kcomp(k,GSL_PREC_DOUBLE)/pi/k; //mode GSL_PREC_DOUBLE, GSL_PREC_SIMPLE, GSL_PREC_APPROX

	return f;
} 

double bem2D::dGdx_ax(double xi, void *params){
	double *p=(double *) params;
	double x0=p[0];
	double s0=p[1];
	double x1=p[2];
	double s1=p[3];
	double x2=p[4];
	double s2=p[5];
	
	double x=1./2.*(x2+x1)+1./2.*(x2-x1)*xi;
	double s=1./2.*(s2+s1)+1./2.*(s2-s1)*xi;
	double r2=sqr(x-x0)+sqr(s+s0);
	double k2=4.*s*s0/( r2 ) ;
	double k=sqrt(k2);
	double E=gsl_sf_ellint_Ecomp(k,GSL_PREC_DOUBLE);
	double c=4./pow(r2,3./2.);
	double I30=c*E/(1.-k2);//mode GSL_PREC_DOUBLE, GSL_PREC_SIMPLE, GSL_PREC_APPROX
	double f=-(x-x0)/4./pi*I30;
	
	return f;
} 

double bem2D::dGds_ax(double xi, void *params){
	double *p=(double *) params;
	double x0=p[0];
	double s0=p[1];
	double x1=p[2];
	double s1=p[3];
	double x2=p[4];
	double s2=p[5];
	
	double x=1./2.*(x2+x1)+1./2.*(x2-x1)*xi;
	double s=1./2.*(s2+s1)+1./2.*(s2-s1)*xi;
	double r2=sqr(x-x0)+sqr(s+s0);
	double k2=4.*s*s0/( r2 ) ;
	double k=sqrt(k2);
	double E=gsl_sf_ellint_Ecomp(k,GSL_PREC_DOUBLE);
	double F=gsl_sf_ellint_Kcomp(k,GSL_PREC_DOUBLE);
	double c=4./pow(r2,3./2.);
	double I30=c*E/(1.-k2);//mode GSL_PREC_DOUBLE, GSL_PREC_SIMPLE, GSL_PREC_APPROX
	double I31=c/k2*(-2.*F+(2.-k2)/(1.-k2)*E);
	double f=-(s*I30-s0*I31)/4./pi;
	return f;
} 

double bem2D::G(double xi, void *params){
	double *p=(double *) params;
	double x0=p[0];
	double y0=p[1];
	double x1=p[2];
	double y1=p[3];
	double x2=p[4];
	double y2=p[5];
	
	double x=1./2.*(x2+x1)+1./2.*(x2-x1)*xi;
	double y=1./2.*(y2+y1)+1./2.*(y2-y1)*xi;
	double r=sqrt(sqr(x-x0)+sqr(y-y0));
	double f=-1./2./pi*log(r);
	
	
	return f;
} 

double bem2D::dGdx(double xi, void *params){
	double *p=(double *) params;
	double x0=p[0];
	double y0=p[1];
	double x1=p[2];
	double y1=p[3];
	double x2=p[4];
	double y2=p[5];
	
	double x=1./2.*(x2+x1)+1./2.*(x2-x1)*xi;
	double y=1./2.*(y2+y1)+1./2.*(y2-y1)*xi;
	double f=-1./2./pi*(x-x0)/(sqr(x-x0)+sqr(y-y0)); //!!!prob1!!!
	return f;
} 

double bem2D::dGdy(double xi, void *params){
	double *p=(double *) params;
	double x0=p[0];
	double y0=p[1];
	double x1=p[2];
	double y1=p[3];
	double x2=p[4];
	double y2=p[5];
	
	double x=1./2.*(x2+x1)+1./2.*(x2-x1)*xi;
	double y=1./2.*(y2+y1)+1./2.*(y2-y1)*xi;

	double f=-1./2./pi*(y-y0)/(sqr(x-x0)+sqr(y-y0));
	return f;
} 

double bem2D::dfdx(double xi,void *params){//(2.3.13)
	double *p=(double *) params;
	double x0=p[0];
	double y0=p[1];
	double x1=p[2];
	double y1=p[3];
	double x2=p[4];
	double y2=p[5];
	double f=p[6];
	double dfdn=p[7];

	double dx=x2-x1;
	double dy=y2-y1;

	double len=sqrt(sqr(dx)+sqr(dy));

	double x=1./2.*(x2+x1)+1./2.*(x2-x1)*xi;
	double y=1./2.*(y2+y1)+1./2.*(y2-y1)*xi;

	double xs=x0-x;
	double ys=y0-y;

	double nx=dy/len;
	double ny=-dx/len;
	double rsqared=sqr(x-x0)+sqr(y-y0);
	double dfdx=1./2./pi*(xs/rsqared*dfdn+f*(nx/rsqared-2.*(xs*xs*nx+xs*ys*ny)/sqr(rsqared)));
	return dfdx;
}

double bem2D::dfdy(double xi,void *params){
	double *p=(double *) params;
	double x0=p[0];
	double y0=p[1];
	double x1=p[2];
	double y1=p[3];
	double x2=p[4];
	double y2=p[5];
	double f=p[6];
	double dfdn=p[7];

	double dx=x2-x1;
	double dy=y2-y1;

	double len=sqrt(sqr(dx)+sqr(dy));

	double x=1./2.*(x2+x1)+1./2.*(x2-x1)*xi;
	double y=1./2.*(y2+y1)+1./2.*(y2-y1)*xi;

	double xs=x0-x;
	double ys=y0-y;

	double nx=dy/len;
	double ny=-dx/len;
	double rsqared=sqr(x-x0)+sqr(y-y0);
	double dfdx=1./2./pi*(ys/rsqared*dfdn+f*(ny/rsqared-2.*(ys*xs*nx+ys*ys*ny)/sqr(rsqared)));
	return dfdx;
}

void bem2D::bem2Dcalcfield( mxArray *plhs[], const mxArray *prhs[] ){
	int vectoranz=mxGetM(prhs[2]);
	double *f=mxGetPr(prhs[1]);
	double *dfdn=mxGetPr(prhs[0]);
	enum x0y0x1y1 {X0=0,Y0=1,X1=2,Y1=3,XPOS=4,YPOS=5};
	double *vector=mxGetPr(prhs[2]);
	double *xposeval=mxGetPr(prhs[3]);
	double *yposeval=mxGetPr(prhs[4]);
	double *x0=& vector[X0*vectoranz];
	double *y0=& vector[Y0*vectoranz];
	double *x1=& vector[X1*vectoranz];
	double *y1=& vector[Y1*vectoranz];
	double *xpos=& vector[XPOS*vectoranz];
	double *ypos=& vector[YPOS*vectoranz];
	
	gsl_integration_workspace *w=gsl_integration_workspace_alloc(1000);
	double result,resultdGdx,resultdGdy, error;
	gsl_function F;
	int row;
	double dfdxsum=0,dfdysum=0;
	for(row=0;row<vectoranz;row++){	
		double p[]={*xposeval,*yposeval,
			x0[row],y0[row],
			x1[row],y1[row],f[row],dfdn[row]};
		double dx=x1[row]-x0[row];
		double dy=y1[row]-y0[row];
		double len=sqrt(sqr(dx)+sqr(dy));
		double hxi=1./2.*len;	
		F.function = &dfdx;
		F.params=p;
		gsl_integration_qag(&F,-1.,1.,1e-13,1e-7,1000,GSL_INTEG_GAUSS15,w,&result, &error);//GSL_INTEG_GAUSS15,21,31,41,51,61
		dfdxsum+=result*hxi;//transposed matrix because of lapack

		F.function = &dfdy;
		F.params=p;
		gsl_integration_qag(&F,-1.,1.,1e-13,1e-7,1000,GSL_INTEG_GAUSS15,w,&result, &error);//GSL_INTEG_GAUSS15,21,31,41,51,61
		dfdysum+=result*hxi;//transposed matrix because of lapack

		}
	gsl_integration_workspace_free(w);           
	plhs[0] = mxCreateDoubleMatrix(2, 1, mxREAL); //mxReal is our data-type
	double *dfdxy=mxGetPr(plhs[0]);
	dfdxy[0]=dfdxsum;
	dfdxy[1]=dfdysum;
}

void bem2D::bem2Dcalc( mxArray *plhs[], const mxArray *prhs[] ){
	int vectoranz=mxGetM(prhs[2]);
	double *f=mxGetPr(prhs[1]);
	double *dfdn=mxGetPr(prhs[0]);
	enum x0y0x1y1 {X0=0,Y0=1,X1=2,Y1=3,XPOS=4,YPOS=5};
	double *vector=mxGetPr(prhs[2]);
	double *xposeval=mxGetPr(prhs[3]);
	double *yposeval=mxGetPr(prhs[4]);
	mxArray *alphaArray=mxCreateDoubleMatrix(vectoranz,1, mxREAL);//stores the vectors connecting each point of the boundary surface
	double *alpha=mxGetPr(alphaArray);//alpha stores the influence coefficients alpha_i(x0) i is the row, x0 is the column see p 64 of Potzrikidis
	mxArray *betaArray=mxCreateDoubleMatrix(vectoranz,1, mxREAL);//stores the vectors connecting each point of the boundary surface
	double *beta=mxGetPr(betaArray);//beta stores the uniform distributions of point sources and point-source dipoles oriented normal to the boundary elements beta_i(x0) i is the row, x0 is the column
	double *x0=& vector[X0*vectoranz];
	double *y0=& vector[Y0*vectoranz];
	double *x1=& vector[X1*vectoranz];
	double *y1=& vector[Y1*vectoranz];
	double *xpos=& vector[XPOS*vectoranz];
	double *ypos=& vector[YPOS*vectoranz];
	
	gsl_integration_workspace *w=gsl_integration_workspace_alloc(1000);
	double result,resultdGdx,resultdGdy, error;
	gsl_function F;
	int row;
	for(row=0;row<vectoranz;row++){	
		double p[]={*xposeval,*yposeval,
			x0[row],y0[row],
			x1[row],y1[row]};
		double dx=x1[row]-x0[row];
		double dy=y1[row]-y0[row];
		double len=sqrt(sqr(dx)+sqr(dy));
		double hxi=1./2.*len;	
		F.function = &G;
		F.params=p;
		gsl_integration_qag(&F,-1.,1.,1e-13,1e-7,1000,GSL_INTEG_GAUSS15,w,&result, &error);//GSL_INTEG_GAUSS15,21,31,41,51,61
		alpha[row]=result*hxi;//transposed matrix because of lapack

		F.function = &dGdx;
		F.params=p;
		gsl_integration_qag(&F,-1.,1.,1e-13,1e-7,1000,GSL_INTEG_GAUSS15,w,&resultdGdx, &error);//GSL_INTEG_GAUSS15,21,31,41,51,61
		
		F.function = &dGdy;
		F.params=p;
		gsl_integration_qag(&F,-1.,1.,1e-13,1e-7,1000,GSL_INTEG_GAUSS15,w,&resultdGdy, &error);//GSL_INTEG_GAUSS15,21,31,41,51,61
		double nx=dy/len;
		double ny=-dx/len;
		beta[row]=hxi*(nx*resultdGdx+ny*resultdGdy);//transposed matrix because of lapack
	}
	gsl_integration_workspace_free(w);           
	plhs[0] = mxCreateDoubleMatrix(1, 1, mxREAL); //mxReal is our data-type
	double *pot=mxGetPr(plhs[0]);
	*pot=0.;
	for(row=0;row<vectoranz;row++){	
		*pot+=-alpha[row]*dfdn[row]+beta[row]*f[row];
	}
	mxDestroyArray(alphaArray);
	mxDestroyArray(betaArray);
}

void bem2D::bem2Dsolve( mxArray *plhs[], const mxArray *prhs[] ){
	int electrodeanz=mxGetNumberOfElements(prhs[0]);
	double *fsmall=mxGetPr(prhs[1]);
	if(mxGetN(prhs[1])!=electrodeanz) printf("Dimension of Electrode Cell must be equal to dimension of Potential array!\n");
	//find out number of elemnts in f and dfdn by summing up number of elements in all Cells
	int vectoranz=0;
	int i,row,col;
	for(i=0;i<electrodeanz;++i){//cell loop
		int rowLen = mxGetN(mxGetCell(prhs[0],i));
		int colLen = mxGetM(mxGetCell(prhs[0],i));
		vectoranz+=colLen-1;
	}

	mxArray *fArray=mxCreateDoubleMatrix(vectoranz,1, mxREAL); //stores the Potential array
	double *f=mxGetPr(fArray);

	enum x0y0x1y1 {X0=0,Y0=1,X1=2,Y1=3,XPOS=4,YPOS=5};
	mxArray *vectorArray=mxCreateDoubleMatrix(vectoranz,6, mxREAL);//stores the vectors connecting each point of the boundary surface
	double *vector=mxGetPr(vectorArray);
	mxArray *alphaArray=mxCreateDoubleMatrix(vectoranz,vectoranz, mxREAL);//stores the vectors connecting each point of the boundary surface
	double *alpha=mxGetPr(alphaArray);//alpha stores the influence coefficients alpha_i(x0) i is the row, x0 is the column see p 64 of Potzrikidis
	mxArray *betaArray=mxCreateDoubleMatrix(vectoranz,vectoranz, mxREAL);//stores the vectors connecting each point of the boundary surface
	double *beta=mxGetPr(betaArray);//beta stores the uniform distributions of point sources and point-source dipoles oriented normal to the boundary elements beta_i(x0) i is the row, x0 is the column
	double *x0=& vector[X0*vectoranz];
	double *y0=& vector[Y0*vectoranz];
	double *x1=& vector[X1*vectoranz];
	double *y1=& vector[Y1*vectoranz];
	double *xpos=& vector[XPOS*vectoranz];
	double *ypos=& vector[YPOS*vectoranz];
	
	//now fill all three arrays with data
	int vectorcnt=0;
	for(i=0;i<electrodeanz;++i){//cell loop
		double *element=mxGetPr(mxGetCell(prhs[0],i));
		int rowLen = mxGetN(mxGetCell(prhs[0],i));
		int colLen = mxGetM(mxGetCell(prhs[0],i));
		double x0temp=element[0*colLen];
		double y0temp=element[1*colLen];
		
		for(col=1;col<colLen;col++){
			double x1temp=element[0*colLen+col];
			double y1temp=element[1*colLen+col];
			x0[vectorcnt]=x0temp;
			y0[vectorcnt]=y0temp;
			x1[vectorcnt]=x1temp;
			y1[vectorcnt]=y1temp;
			f[vectorcnt]=fsmall[i];
			xpos[vectorcnt]=(x0temp+x1temp)/2.;
			ypos[vectorcnt]=(y0temp+y1temp)/2.;
			x0temp=x1temp;
			y0temp=y1temp;
			vectorcnt++;
		}
	}
	gsl_integration_workspace *w=gsl_integration_workspace_alloc(1000);
	double result,resultdGdx,resultdGdy, error;
	gsl_function F;
	
	for(row=0;row<vectoranz;row++){
		for(col=0;col<vectoranz;col++){
			if(col==row){
				beta[row+vectoranz*col]=0.;//transposed matrix because of lapack
				double l=sqrt(sqr(x0[row]-x1[row])+sqr(y0[row]-y1[row]));
				alpha[row+vectoranz*col]=-1./2./pi*( l*(log(l/2.)-1.));//transposed matrix because of lapack
				
			}
			else{
				double p[]={xpos[row],ypos[row],
					x0[col],y0[col],
					x1[col],y1[col]};
				double dx=x1[col]-x0[col];
				double dy=y1[col]-y0[col];
				double len=sqrt(sqr(dx)+sqr(dy));
				double hxi=1./2.*len;
				
				F.function = &G;
				F.params=p;
				gsl_integration_qag(&F,-1.,1.,1e-13,1e-7,1000,GSL_INTEG_GAUSS15,w,&result, &error);//GSL_INTEG_GAUSS15,21,31,41,51,61
				alpha[row+vectoranz*col]=result*hxi;//transposed matrix because of lapack

				F.function = &dGdx;
				F.params=p;
				gsl_integration_qag(&F,-1.,1.,1e-13,1e-7,1000,GSL_INTEG_GAUSS15,w,&resultdGdx, &error);//GSL_INTEG_GAUSS15,21,31,41,51,61
				
				F.function = &dGdy;
				F.params=p;
				gsl_integration_qag(&F,-1.,1.,1e-13,1e-7,1000,GSL_INTEG_GAUSS15,w,&resultdGdy, &error);//GSL_INTEG_GAUSS15,21,31,41,51,61
				double nx=dy/len;
				double ny=-dx/len;
				beta[row+vectoranz*col]=hxi*(nx*resultdGdx+ny*resultdGdy);//transposed matrix because of lapack
			}
		}
	}
	gsl_integration_workspace_free(w);
	long int  c1, c2,ok;
	long int *pivot=new long int[vectoranz];
	plhs[0]=mxCreateDoubleMatrix(vectoranz,1, mxREAL);
	double *b=mxGetPr(plhs[0]);
	for (row=0; row<vectoranz; row++)		//to call a Fortran routine from C we 
	{				// have to used the transform of the matrix 
		b[row]=-0.5*f[row];
		for(col=0; col<vectoranz; col++) {
			b[row]+=beta[row+vectoranz*col]*f[col];
		}
	}					
	c1=vectoranz;			// and put all numbers we want to pass 
	c2=1;    			// to the routine in variables 
	// find solution using LAPACK routine SGESV, all the arguments have to 
	// be pointers and you have to add an underscore to the routine name 
	DGESV(&c1, &c2, alpha, &c1, pivot, b, &c1, &ok);      
	delete[] pivot;
	plhs[1]=fArray;
	plhs[2]=vectorArray;
	mxDestroyArray(alphaArray);
	mxDestroyArray(betaArray);
}

void bem2D::bem2Drefine( mxArray *plhs[], const mxArray *prhs[] ){
	int factor=*mxGetPr(prhs[1]);
	int electrodeanz=mxGetNumberOfElements(prhs[0]);
	plhs[0]=mxCreateCellMatrix(1,electrodeanz);

	int i,col,row;
	for(i=0;i<electrodeanz;++i){//cell loop
		double *element=mxGetPr(mxGetCell(prhs[0],i));
		int rowLen = mxGetN(mxGetCell(prhs[0],i));
		int colLen = mxGetM(mxGetCell(prhs[0],i));
		int colLen2=colLen*factor-factor+1;
		mxArray *matrix=mxCreateDoubleMatrix(colLen2,rowLen, mxREAL);
		mxSetCell(plhs[0],i,matrix);
		double *targetelement=mxGetPr(matrix);
		double x0=element[0*colLen+0];
		double y0=element[1*colLen+0];
		targetelement[0*(colLen2)]=x0;
		targetelement[1*(colLen2)]=y0;
		int col;
		for(col=1;col<colLen;col++){
			double x1=element[0*colLen+col];
			double y1=element[1*colLen+col];
			int interpol;
			for(interpol=1;interpol<factor;interpol++){
				double lambda=double(interpol)/double(factor);
				targetelement[0*(colLen2)+(col-1)*factor+interpol]=x1*lambda+x0*(1.-lambda);
				targetelement[1*(colLen2)+(col-1)*factor+interpol]=y1*lambda+y0*(1.-lambda);
			}
			targetelement[0*(colLen2)+col*factor]=x1;
			targetelement[1*(colLen2)+col*factor]=y1;
			x0=x1;
			y0=y1;
		}	
	}
}
*/