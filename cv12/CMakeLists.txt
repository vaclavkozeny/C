cmake_minimum_required(VERSION 3.29)
project(cv12)

set(CMAKE_CXX_STANDARD 20)

add_executable(cv12 main.cpp
        canvas.h
        canvas.cpp)
