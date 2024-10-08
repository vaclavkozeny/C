cmake_minimum_required(VERSION 3.29)
project(cv02 C)

set(CMAKE_C_STANDARD 11)

add_executable(cv02 main.c
        file_manager.h
        file_manager.c
        processing.h
        processing.c
        output.h
        output.c
)
