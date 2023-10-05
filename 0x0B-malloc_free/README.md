# alx-low_level_programming / 0x0B-malloc_free

## Description

This directory contains C programs that explore dynamic memory allocation using malloc and free. Each program corresponds to a specific task:

1. **create_array.c**: Creates an array of chars and initializes it with a specific char.

2. **_strdup.c**: Returns a pointer to a newly allocated space in memory containing a copy of the given string.

3. **str_concat.c**: Concatenates two strings and returns a pointer to the newly allocated space in memory.

4. **alloc_grid.c**: Returns a pointer to a 2-dimensional array of integers, with each element initialized to 0.

5. **free_grid.c**: Frees a 2-dimensional grid created by the alloc_grid function.

## Files

- [create_array.c](0-create_array.c)
- [_strdup.c](1-strdup.c)
- [str_concat.c](2-str_concat.c)
- [alloc_grid.c](3-alloc_grid.c)
- [free_grid.c](4-free_grid.c)
- [main.h](main.h) (Header file containing function prototypes)

## Compilation

To compile each program, use the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o create_array
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o strdup
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o str_concat
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-alloc_grid.c -o alloc_grid
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-alloc_grid.c 4-free_grid.c -o free_grid
