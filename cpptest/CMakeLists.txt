cmake_minimum_required(VERSION 3.29)
project(cpptest)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpptest main.cpp
        my_string.h
        my_string.cpp
        input.h
        input.cpp
        proud.h
        proud.cpp
        canvas.h
        canvas.cpp)
