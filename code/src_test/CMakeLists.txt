include_directories(${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/include_test)

# looks for cpp files in the subdirectories app and libmoney_test
file(GLOB TESTS_SOURCE_FILES "app/*.cpp" "libmoney_test/*.cpp")

message(STATUS "TEST_SOURCES: " ${TESTS_SOURCE_FILES})

add_executable(run_tests ${TESTS_SOURCE_FILES})
set_target_properties(run_tests PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${COMMON_RUNTIME_OUTPUT_DIRECTORY}")
add_custom_command(TARGET run_tests POST_BUILD COMMAND "${COMMON_RUNTIME_OUTPUT_DIRECTORY}/run_tests")
add_custom_target(tests "${COMMON_RUNTIME_OUTPUT_DIRECTORY}/run_tests" DEPENDS run_tests COMMENT "Running CPPUNIT tests...")

target_link_libraries(run_tests money cppunit)
install_programs(/bin FILES run_tests)
