cmake_minimum_required(VERSION 3.8...3.12)
project(undefined C)
add_library(undefined SHARED uses_undefined.c)
add_executable(undefined_exe main.c)
target_link_libraries(undefined_exe PRIVATE undefined)
