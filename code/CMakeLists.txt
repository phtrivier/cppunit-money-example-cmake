# Name the project
PROJECT(Test)

# -------------------------

# A warning appeared because minimum version must be
# explicited.
# The warning told me to add this :
cmake_minimum_required(VERSION 2.6)

# A warning appeared because cmake must look for cppunit.
# The warning told me to add this :
if(COMMAND cmake_policy)
  cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)

SET(COMMON_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")
SET(COMMON_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/libs")

# -------------------------

# Usefull to get CPPUNIT ...
# I would love to find a way to have cppunit
# only required for builds where unit test make sense ...
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules/")
FIND_PACKAGE(CPPUNIT REQUIRED)

# -------------------------

# Tell CMake to process the sub-directories
add_subdirectory(src)
add_subdirectory(include)

add_subdirectory(src_test)
add_subdirectory(include_test)

# -------------------------


