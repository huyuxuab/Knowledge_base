cmake_minimum_required(VERSION 3.7)
project(Knowledge_base)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(Knowledge_base ${SOURCE_FILES})
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++0x")