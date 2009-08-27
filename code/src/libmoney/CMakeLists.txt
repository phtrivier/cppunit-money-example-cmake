
include_directories(${CMAKE_SOURCE_DIR}/include)

# Tell CMake to build a shared library from
# libminey
ADD_LIBRARY(money SHARED Money.cpp)
SET_TARGET_PROPERTIES(money PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${COMMON_LIBRARY_OUTPUT_DIRECTORY}")

# make sure the library gets installed
install_targets(/lib money)

