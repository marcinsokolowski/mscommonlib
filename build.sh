#!/bin/bash

mkdir -p build/ 
cd build
cmake  -DCMAKE_INSTALL_PREFIX=/astro/mwavcs/pacer_blink/software/sles12sp5/development/mscommonlib/ .. 
make
make install
# cp libmscommonlib.so* ../lib/

