# CMakeList.txt : CMake project for libmonkey, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (libmonkey "libmonkey.cpp" "libmonkey.h")
target_include_directories(libmonkey PRIVATE "../include")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET libmonkey PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
