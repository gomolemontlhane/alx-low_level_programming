#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the string containing characters to search for
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *match_accept = accept;

		while (*match_accept)
		{
			if (*s == *match_accept)
				return (s);
			match_accept++;
		}
		s++;
	}

	return (NULL);
}
