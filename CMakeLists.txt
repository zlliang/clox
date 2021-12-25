cmake_minimum_required(VERSION 3.0.0)
project(clox) # VERSION 0.0.0-20211225

add_executable(clox
  src/chunk.c
  src/compiler.c
  src/debug.c
  src/main.c
  src/memory.c
  src/object.c
  src/scanner.c
  src/table.c
  src/value.c
  src/vm.c
)
