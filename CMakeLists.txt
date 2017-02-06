cmake_minimum_required(VERSION 3.6)
project(newDomTree)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp domtreenode.h)
add_executable(newDomTree ${SOURCE_FILES})