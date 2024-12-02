cmake_minimum_required(VERSION 3.26)
project(Advent_Of_Code_2024)

set(CMAKE_CXX_STANDARD 14)

# Set the output directory for executables to the root of the build tree
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}")


add_executable(my_program main.cpp)
add_executable(Advent_Of_Code_2024
        main.cpp)
