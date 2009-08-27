
# Tell CMake to build a shared library from 
# yo.c
ADD_LIBRARY(yo SHARED yo.c)

# make sure the library gets installed
install_targets(/lib yo)

