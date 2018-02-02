cmake_minimum_required(VERSION 2.8)
project(set_pid C)

set(CMAKE_C_STANDARD 99)

add_library(set_pid SHARED library.c)
set_target_properties(set_pid PROPERTIES POSITION_INDEPENDENT_CODE TRUE)
target_link_libraries(set_pid ${CMAKE_DL_LIBS})

install(TARGETS set_pid LIBRARY DESTINATION lib)
