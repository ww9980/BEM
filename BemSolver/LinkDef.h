#ifdef __CINT__
#pragma link off all class;
#pragma link off all function;
#pragma link off all global;

#pragma link C++ class vector<unsigned char>;
#pragma link C++ class vector<TString>;
#pragma link C++ class ExpLog;//only needed if class is derived from TObject and dll for root is generated

//ks
#pragma link C++ class list<D3element*>;
#pragma link C++ class calcD3triangle;//only needed if class is derived from TObject and dll for root is generated
#pragma link C++ class D3element;//only needed if class is derived from TObject and dll for root is generated
#pragma link C++ class D3electrode;//only needed if class is derived from TObject and dll for root is generated
#pragma link C++ class D3triangle;//only needed if class is derived from TObject and dll for root is generated
#pragma link C++ class D3rectangle;//only needed if class is derived from TObject and dll for root is generated
#pragma link C++ class D3disk;//only needed if class is derived from TObject and dll for root is generated
#pragma link C++ class D3tube;//only needed if class is derived from TObject and dll for root is generated
#pragma link C++ class D3cylinder;//only needed if class is derived from TObject and dll for root is generated
#pragma link C++ class D3box;//only needed if class is derived from TObject and dll for root is generated
#pragma link C++ class D3sphere;
#pragma link C++ class D3icosahedron;
#pragma link C++ class D3world;//only needed if class is derived from TObject and dll for root is generated
#pragma link C++ class D3slowworld;//only needed if class is derived from TObject and dll for root is generated
#pragma link C++ class D3ImportedElectrodes;
#pragma link C++ class D3thicktriangle;
#pragma link C++ class list<D3element*>;
#pragma link C++ global pi;
#pragma link C++ function testfn;
#pragma link C++ global logfile;
#pragma link C++ global Cout;
#pragma link C++ function q;

//ks

// 'reloaded' classes


//#pragma link C++ global RootExchange;
//#pragma link C++ namespace RootExchange;
#endif
//add in property to linkdef.h
// $(ROOTSYS)\bin\rootcint -f bindict.cxx -c  ExpJob.h ExpBin.h LinkDef.h
//only needed if class is derived from TObject and dll for root is generated
