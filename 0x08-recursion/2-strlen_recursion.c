#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	char result;

	if (*s == '\0') /* Base case: If we've reached the end of the string */
		return (0);
	result = 1 + _strlen_recursion(s + 1);
	return (result);
}
