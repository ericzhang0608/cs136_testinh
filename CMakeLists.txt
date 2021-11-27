cmake_minimum_required(VERSION 3.20)
project(cs136_testinh C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(cs136_testinh
        cs136.h
        main.c
        simple.expect
        simple.in)
