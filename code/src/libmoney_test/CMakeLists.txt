# Tell CMake to build a shared library from
# yo.c
ADD_LIBRARY(money-test SHARED MoneyTest.cpp)

# make sure the library gets installed
install_targets(/lib money-test)

