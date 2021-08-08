cmake_minimum_required(VERSION 3.9)
project(mscommonlib VERSION 1.0.1 DESCRIPTION "mscommonlib description")
include(GNUInstallDirs)
add_library(mscommonlib SHARED 
     baseanal.cpp basedefines.cpp basestring.cpp basestructs.cpp ccdrowcollist.cpp cexcp.cpp cfgfile.cpp cmncfg.cpp cmn_tmpl.cpp laplace_info.cpp mybaseserver.cpp mybits.cpp mycmnglobals.cpp mydate2.cpp 
     mydate.cpp myenv.cpp myfastlongtab.cpp myfile.cpp myfract.cpp myframeslist.cpp myhisto2D.cpp myhisto.cpp myinifile.cpp mykeytab.cpp mylibloader.cpp mylock.cpp mymatrix.cpp mymsgqueue.cpp mynet.cpp 
     myparser.cpp mypipe.cpp mypixellist.cpp mypoints.cpp myprogress.cpp myranges.cpp myrequestdef.cpp mysafekeytab.cpp myshmem.cpp mysignal.cpp mystring.cpp mystrtable.cpp mytrace.cpp mytxtclient.cpp 
     mytxtinetserver.cpp mytxtserver.cpp  myutil.cpp myvalcounter.cpp paramtab.cpp random.cpp tab2Ddesc.cpp templ.cpp 
     gendistr.cpp calcrot.cpp mathfunc.cpp myfits.cpp mygraphcut.cpp pom.cpp vector.cpp
     ccddriver_interface.cpp
           )
add_definitions(-D_UNIX -D_ENABLE_PROFILER_ -D_ENABLE_TRACING_ -D_ENABLE_VISUALIZATION_ -D_MONTE_CARLO_ -D_NO_ROOT_)
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
