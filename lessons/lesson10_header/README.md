# Header Files

## Lesson Covers

- Declaration of function in .h file
- Function instance creation in a second cpp file
- Linking of .h file in cpp

## Description

`#pragma once` is a non-standard but widely supported preprocessor directive designed to cause the current source file to be included only once in a single compilation.

`#include "log.h"` let's the compile know to compile the code in header file first and include the declared function and variables in the current file.

## Notes

Do not forget to compile all your cpp files. If you ar using VS code follow instructions at [Using GCC with MinGW](https://code.visualstudio.com/docs/cpp/config-mingw). From command line, type the following command:
```
g++ -o main.exe *.cpp && .\main.exe
```