#!/usr/bin/bash
gcc *.c -c -fPLC
gcc *.o -shared -o liball.so
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH

