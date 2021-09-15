cmake_minimum_required(VERSION 3.0.0)
project(clox) # VERSION 0.0.0-20210915

file(GLOB SOURCES src/*.c)
add_executable(clox ${SOURCES})
