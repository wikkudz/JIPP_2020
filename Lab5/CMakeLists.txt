cmake_minimum_required( VERSION 3.19.0 )

project( Lab3 )

#flags

#include files
include_directories( ./include/Lab3  ./src )

#target
add_executable( main ./src/main.cpp  ./src/macierze.cpp )