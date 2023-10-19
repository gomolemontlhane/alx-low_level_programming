# 0x12. C - Singly Linked Lists

## Description

This project implements various functions for working with singly linked lists in the C programming language. The tasks include printing a list, getting the length of a list, adding nodes to the list, and freeing the list.

## Project Files

- `0-print_list.c`: Function to print all elements of a list.
- `1-list_len.c`: Function to get the number of elements in a list.
- `2-add_node.c`: Function to add a new node at the beginning of a list.
- `3-add_node_end.c`: Function to add a new node at the end of a list.
- `4-free_list.c`: Function to free the memory allocated for a list.
- `lists.h`: Header file with function prototypes and `list_t` structure.

## Compilation

Compile the source files using the following commands:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-print_list.c -o task0
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c 1-list_len.c -o task1
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o task2
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o task3
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o task4
```
### Usage

```bash
./a
./b
./c
./d
./e
```

## Notes

- The project follows the provided guidelines for coding style, compilation, and file organization.
- Each task is implemented in a separate source file.
- The lists.h header file contains necessary function prototypes and the list_t structure.

