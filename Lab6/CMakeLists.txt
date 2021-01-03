cmake_minimum_required( VERSION 3.19.0 )

project( Lab6 )

#flags

#include files
include_directories( ./include  ./src )

#target
add_executable( main ./src/main.cpp )