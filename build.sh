#!/bin/bash

mkdir -p build/ lib/
cd build
cmake ..
make
cp libmscommonlib.so* ../lib/

