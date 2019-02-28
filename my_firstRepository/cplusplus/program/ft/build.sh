#!/bin/bash

if [ ! -d build  ];then
    mkdir build
else
    rm -rf build
    mkdir build
fi

cd build

cmake  -G"MSYS Makefiles" ..

make