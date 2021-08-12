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
    PUBLIC_HEADER api/mscommonlib.h)
configure_file(mscommonlib.pc.in mscommonlib.pc @ONLY)
target_include_directories(mscommonlib PRIVATE .)
install(TARGETS mscommonlib
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(FILES ${CMAKE_BINARY_DIR}/mscommonlib.pc
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)
