#!/bin/bash

# Compile all .c files into object files
gcc -c -Wall -Werror -fpic *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Cleanup object files
rm *.o

# Display the symbols defined in the dynamic library
nm -D --defined-only liball.so

