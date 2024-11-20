cmake_minimum_required(VERSION 3.29)
project(cv09)

set(CMAKE_CXX_STANDARD 20)

add_executable(cv09 main.cpp
        element.h
        element.cpp
        elementlist.h
        elementlist.cpp)
