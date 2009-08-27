
# Tell CMake to build a shared library from
# yo.c
ADD_LIBRARY(money SHARED Money.cpp)

# make sure the library gets installed
install_targets(/lib money
)

