cmake_minimum_required(VERSION 3.9)
project(set_pid C)

set(CMAKE_C_STANDARD 99)

add_library(set_pid SHARED library.c)