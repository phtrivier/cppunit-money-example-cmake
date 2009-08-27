include_directories(${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/include_test)

# Tell CMake to build a shared library from
# yo.c
ADD_LIBRARY(money-test SHARED MoneyTest.cpp)

# make sure the library gets installed
install_targets(/lib money-test)

