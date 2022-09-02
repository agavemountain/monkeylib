
file(GLOB MONKEY_TESTS_SRC "*.cpp")

# enable ctest
enable_testing()

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(monkeylib-test ${MONKEY_TESTS_SRC} )
target_link_libraries(monkeylib-test gtest_main )
add_test(NAME core_test COMMAND monkeylib-test)