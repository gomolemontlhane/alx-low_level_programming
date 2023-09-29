#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the input string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}
