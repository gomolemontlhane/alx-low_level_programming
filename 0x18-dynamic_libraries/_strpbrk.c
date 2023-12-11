#include "main.h"
#include <stddef.h>

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: the string to be searched
 *@accept: the string containing the characters to match
 *
 *Return: a pointer to the first occurrence in s of any of the bytes
 *in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL)
		{
			return (s); /*Found a matching character, return the pointer */
		}

		s++;
	}

	/*If no matching character is found, return NULL */
	return (NULL);
}
