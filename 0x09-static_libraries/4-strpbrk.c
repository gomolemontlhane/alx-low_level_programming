#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the string containing characters to search for
 *
 * Return: pointer to the first occurrence in @s of any of the characters
 * in @accept, or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL)
			return (s);
		s++;
	}

	return (NULL);
}
