cmake_minimum_required(VERSION 3.20)
project(Ex2_C)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ex2_C
        main.c
        Makefile
        my_mat.c
        my_mat.h)
