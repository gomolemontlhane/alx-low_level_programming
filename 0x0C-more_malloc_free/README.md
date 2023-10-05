# alx-low_level_programming / 0x0C-more_malloc_free

## Description

This directory contains C programs that demonstrate memory allocation using malloc and free. Each program corresponds to a specific task:

1. **malloc_checked.c**: Allocates memory using `malloc` and terminates the program if allocation fails.

2. **string_nconcat.c**: Concatenates two strings, allocating memory for the result. Handles edge cases like `NULL` strings and limiting concatenation to a specified number of bytes.

3. **calloc.c**: Allocates memory for an array using `calloc`. Sets the memory to zero and handles edge cases for size and allocation failure.

4. **array_range.c**: Creates an array of integers containing values from `min` to `max`. Handles edge cases for invalid input and allocation failure.

## Files

- [malloc_checked.c](malloc_checked.c)
- [string_nconcat.c](string_nconcat.c)
- [calloc.c](calloc.c)
- [array_range.c](array_range.c)
- [main.h](main.h) (Header file containing function prototypes)

## Compilation

To compile the programs, use the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c malloc_checked.c -o malloc_checked
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-string_nconcat.c -o string_nconcat
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-calloc.c -o calloc
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-array_range.c -o array_range

