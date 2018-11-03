cmake_minimum_required(VERSION 3.8)
project(data)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(data
        test.cpp A.h dml_class/node.h dml_class/cm.h)
