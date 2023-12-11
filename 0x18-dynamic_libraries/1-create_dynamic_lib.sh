#!/bin/bash

# Compile all .c files to create liball.so
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -fPIC -o liball.so *.c

