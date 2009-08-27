include_directories(${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/include_test)
add_executable(run_tests run_tests.cpp)
SET_TARGET_PROPERTIES(run_tests PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${COMMON_RUNTIME_OUTPUT_DIRECTORY}")

ADD_CUSTOM_COMMAND(TARGET run_tests POST_BUILD
  COMMAND "${COMMON_RUNTIME_OUTPUT_DIRECTORY}/run_tests")
ADD_CUSTOM_TARGET(tests "${COMMON_RUNTIME_OUTPUT_DIRECTORY}/run_tests" DEPENDS run_tests COMMENT "Running CPPUNIT tests...")


#ADD_CUSTOM_COMMAND(TARGET run_tests POST_BUILD
#  COMMAND "${COMMON_RUNTIME_OUTPUT_DIRECTORY}/run_tests")

target_link_libraries(run_tests money money-test cppunit)
install_programs(/bin FILES run_tests)
