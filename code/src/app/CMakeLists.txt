include_directories(${CMAKE_SOURCE_DIR}/include)
add_executable(hello hello.c)
target_link_libraries(hello yo)
install_programs(/bin FILES hello)
