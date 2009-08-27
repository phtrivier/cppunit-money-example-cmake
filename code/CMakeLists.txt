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

# -------------------------

# Tell CMake to process the sub-directories
add_subdirectory(src)
add_subdirectory(include)

add_subdirectory(src_test)
add_subdirectory(include_test)

