include_directories(${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/include_test)

# Tell CMake to build a shared library from
# yo.c
ADD_LIBRARY(money-test SHARED MoneyTest.cpp)
SET_TARGET_PROPERTIES(money-test PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${COMMON_LIBRARY_OUTPUT_DIRECTORY}")

# make sure the library gets installed
install_targets(/lib money-test)

