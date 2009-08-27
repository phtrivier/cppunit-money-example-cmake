# Name the project
PROJECT(Test)

# Tell CMake to process the sub-directories
add_subdirectory(src)
add_subdirectory(include)

add_subdirectory(src_test)
add_subdirectory(include_test)

