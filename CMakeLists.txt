cmake_minimum_required(VERSION 3.9)
project(data)

set(CMAKE_CXX_STANDARD 11)

add_executable(data
        test.cpp A.h dml_class/node.h dml_class/cm.h)
