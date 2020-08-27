cmake_minimum_required(VERSION 3.16.3)

project("NOVA")
enable_testing()

#include device header
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(Rocket)
