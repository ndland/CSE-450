cmake_minimum_required(VERSION 3.3)
project(c_programming)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    problem_4.c)

add_executable(c_programming ${SOURCE_FILES})