# 0x03. C - Debugging

## Description

This repository contains C programs focusing on debugging techniques in C.

## List of Files and Programs

### 0-main.c
- Program that tests the `positive_or_negative()` function, checking the correct output when given the case of 0.

Compile and run:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
./0-main
```
### 1-main.c
Program that causes an infinite loop. Comment out the part of the code that is causing the loop.

Compile and run:
```bash
gcc -std=gnu89 1-main.c -o 1-main
./1-main
```
### 2-main.c
Program that incorrectly prints the largest of three integers. Fix the code in 2-largest_number.c to correctly print out the largest number.
Compile and run:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main
./2-main
```

### 3-main_a.c and 3-main_b.c
Programs that convert a date to the day of the year and determine how many days are left in the year, taking leap years into consideration. Test with different dates including a leap year (e.g., 02/29/2000).
Compile and run:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a
./3-main_a
```
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b
./3-main_b
```
Author
Gomolemo Ntlhane
