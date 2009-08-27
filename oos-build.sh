#!/bin/sh
echo 'Cleaning any remaining CMake-generated files, so that out-of-source build is safe..'
cd code ; ./clean_cmake_files.sh && cd ../ && \
echo 'Creating build folder' && \
mkdir -p build && cd ./build && cmake ../code && \
echo 'build folder is ready to run make'
