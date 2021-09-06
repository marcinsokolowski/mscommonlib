cmake_minimum_required(VERSION 3.9)
project(mscommonlib VERSION 1.0.1 DESCRIPTION "mscommonlib description")
include(GNUInstallDirs)
add_library(mscommonlib SHARED 
     src/baseanal.cpp src/basedefines.cpp src/basestring.cpp src/basestructs.cpp src/ccdrowcollist.cpp src/cexcp.cpp src/cfgfile.cpp src/cmncfg.cpp src/cmn_tmpl.cpp src/laplace_info.cpp src/ src/mybaseserver.cpp src/mybits.cpp src/mycmnglobals.cpp src/mydate2.cpp 
     src/mydate.cpp src/myenv.cpp src/myfastlongtab.cpp src/myfile.cpp src/myfract.cpp src/myframeslist.cpp src/myhisto2D.cpp src/myhisto.cpp src/myinifile.cpp src/mykeytab.cpp src/mylibloader.cpp src/mylock.cpp src/mymatrix.cpp src/mymsgqueue.cpp src/mynet.cpp 
     src/myparser.cpp src/mypipe.cpp src/mypixellist.cpp src/mypoints.cpp src/myprogress.cpp src/myranges.cpp src/myrequestdef.cpp src/mysafekeytab.cpp src/myshmem.cpp src/mysignal.cpp src/mystring.cpp src/mystrtable.cpp src/mytrace.cpp src/mytxtclient.cpp 
     src/mytxtinetserver.cpp src/mytxtserver.cpp  src/myutil.cpp src/myvalcounter.cpp src/paramtab.cpp src/random.cpp src/tab2Ddesc.cpp src/templ.cpp 
     src/gendistr.cpp src/calcrot.cpp src/mathfunc.cpp src/myfits.cpp src/mygraphcut.cpp src/pom.cpp src/vector.cpp
     src/ccddriver_interface.cpp
           )
add_definitions(-D_UNIX -D_ENABLE_PROFILER_ -D_ENABLE_TRACING_ -D_ENABLE_VISUALIZATION_ -D_MONTE_CARLO_ -D_NO_ROOT_ -I../src/)
set_target_properties(mscommonlib PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION 1
    PUBLIC_HEADER src/baseanal.h;src/basedefines.h;src/basestring.h;src/basestructs.h;src/calcrot.h;src/ccdanal_interf.h;src/ccddriver_interface.h;src/ccdrowcollist.h;src/cexcp.h;src/cfgfile.h;src/cmncfg.h;src/gendistr.h;src/gfit.h;src/laplace_info.h;src/many_tab2D.h;src/mathconst.h;src/mathdefs.h;src/mathfunc.h;src/mybaseserver.h;src/mybits.h;src/mycmnglobals.h;src/mycyclictab.h;src/mydate.h;src/myenv.h;src/myfastlongtab.h;src/myfile.h;src/myfits.h;src/myfract.h;src/myframeslist.h;src/mygraphcut.h;src/myhisto2D.h;src/myhisto.h;src/myinifile.h;src/mykeytab.h;src/mylibloader.h;src/mylock.h;src/mymacros.h;src/mymatrix.h;src/mymsgqueue.h;src/mynet.h;src/myparser.h;src/mypipe.h;src/mypixellist.h;src/mypoints.h;src/myprogress.h;src/myptrtable.h;src/myranges.h;src/myrequestdef.h;src/mysafekeytab.h;src/myshmem.h;src/mysignal.h;src/mystring.h;src/mystrtable.h;src/mytrace.h;src/mytxtclient.h;src/mytxtinetserver.h;src/mytxtserver.h;src/mytypes.h;src/myutil.h;src/myvalcounter.h;src/mywget.h;src/paramtab.h;src/random.h;src/tab2Ddesc.h;src/tab2D.h;src/vector.h)
configure_file(mscommonlib.pc.in mscommonlib.pc @ONLY)
target_include_directories(mscommonlib PRIVATE .)
install(TARGETS mscommonlib
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(FILES ${CMAKE_BINARY_DIR}/mscommonlib.pc
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)
