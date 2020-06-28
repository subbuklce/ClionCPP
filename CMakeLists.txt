cmake_minimum_required(VERSION 3.15)
project(ClionCPP)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pthread" )
add_executable(ClionCPP main.cpp)