cmake_minimum_required(VERSION 3.8)
project(info2uebung2)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c datetime.c datetime.h datastructure.h teams.c teams.h tools.c tools.h menu.c menu.h)
add_executable(info2uebung2 ${SOURCE_FILES})
