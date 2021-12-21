#ifndef _CLOX_COMPILER_H_
#define _CLOX_COMPILER_H_

#include "object.h"
#include "vm.h"

ObjFunction* compile(const char* source);
void markCompilerRoots();

#endif
