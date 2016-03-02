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
typedef double double2[2];
class D2element{
public:
	D2element(double pts[][2]);
	~D2element();
	virtual void refine(int factor);
protected:
	double2 *points;
	int cnt;	
};
/*
class bem2D{
protected:
	double f(double x, void *params);
	double G_ax(double xi, void *params);
	double dGdx_ax(double xi, void *params);
	double dGds_ax(double xi, void *params);
	double G(double xi, void *params);
	double dGdx(double xi, void *params);
	double dGdy(double xi, void *params);
	double dfdx(double xi,void *params);
	double dfdy(double xi,void *params);
public:
	void bem2Dcalcfield( mxArray *plhs[], const mxArray *prhs[] );
	void bem2Dcalc( mxArray *plhs[], const mxArray *prhs[] );
	void bem2Dsolve( mxArray *plhs[], const mxArray *prhs[] );
	void bem2Drefine( mxArray *plhs[], const mxArray *prhs[] );
};
*/