#!/bin/bash

make clean
qmake ./BRPM_TestProtocol.pro
#make g++ -m32 -std=c++11
#make g++ -std=c++11
make
