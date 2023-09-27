#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The input string.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Base case: If we've reached the end of the string */
	{
		/* Use a tab character for indentation here */
		return;
	}
	_print_rev_recursion(s + 1); /* Recursively calls function w next character */
	_putchar(*s); /* Print the current character after the recursive call */
}
