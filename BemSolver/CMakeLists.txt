#CMake configuration file
cmake_minimum_required(VERSION 2.6)
#project name 
project(BEMSOLVER)
set(CMAKE_CXX_FLAGS "-g -Wall")
include_directories(${BEMSOLVER_SOURCE_DIR})
include_directories("/usr/include/root/")
link_directories(${BEMSOLVER_SOURCE_DIR})
link_directories("/usr/lib/root/")
# executable name and files
add_executable(linearpaultrap
bem2d.cpp            ExpLog.cpp               mulLocal.c
bem.cpp              fastlap.c                mulMats.c
calcp.c              ksalloc.c                mulMulti.c
linearPaulTrap.cxx       mulSetup.c
dict2.cpp            
direct.c       
dl_dxf.cpp           mulDisplay.c             stdafx.cpp
dl_writer_ascii.cpp  mulDo.c                  uglyalloc.c
driver.c             mulGlobal.c
)

#command is called unfortunalty after after build
# if you change one of ExpLog.h bem.h LinkDef.h 
# rund bild twice. Or run manually the commands belwo.
add_custom_command(
   TARGET ALL
   COMMAND ${BEMSOLVER_SOURCE_DIR}/build_dict_cxx.sh
   VERBATIM
)


target_link_libraries(linearpaultrap gsl gslcblas Cint gsl lapack fftw3 Core Hist Graf Graf3d Gpad Tree Rint Postscript Matrix Net Physics Gui Geom RIO dl) #link the math library

#building just a library. 
add_library(bemsolver 
SHARED
bem2d.cpp            ExpLog.cpp               mulLocal.c
bem.cpp              fastlap.c                mulMats.c
calcp.c              ksalloc.c                mulMulti.c
mulSetup.c
dict2.cpp            
direct.c       
dl_dxf.cpp           mulDisplay.c             stdafx.cpp
dl_writer_ascii.cpp  mulDo.c                  uglyalloc.c
driver.c             mulGlobal.c
)
target_link_libraries(bemsolver gsl gslcblas Cint gsl lapack fftw3 Core Hist Graf Graf3d Gpad Tree Rint Postscript Matrix Net Physics Gui Geom RIO dl) #link the math library




