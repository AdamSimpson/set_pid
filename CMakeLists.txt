cmake_minimum_required(VERSION 2.8)
project(set_pid C)

set(CMAKE_C_STANDARD 99)

add_library(set_pid SHARED library.c)

install(TARGETS set_pid LIBRARY DESTINATION lib)
