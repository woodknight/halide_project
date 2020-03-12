cmake_minimum_required(VERSION 3.14)

# set compiler path
set(CMAKE_C_COMPILER "/opt/llvm-project/build/bin/clang")
set(CMAKE_CXX_COMPILER "/opt/llvm-project/build/bin/clang++")


set(CMAKE_CXX_STANDARD 11)

# set build type
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# project name
project(halide_demo CXX)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# halide
set(HALIDE_DISTRIB_DIR "/opt/Halide/build/install/")
include("${HALIDE_DISTRIB_DIR}/halide.cmake")

add_subdirectory(foo)
add_subdirectory(bar)

# add_executable(main main.cpp)
# target_include_directories(main PRIVATE ${HALIDE_INCLUDE_DIR} )
# target_link_libraries(main PRIVATE foo)
