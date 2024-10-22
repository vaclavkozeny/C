cmake_minimum_required(VERSION 3.29)
project(cv03 C)

set(CMAKE_C_STANDARD 11)

add_executable(cv03 main.c
        pointer_lib.h
        pointer_lib.c)
