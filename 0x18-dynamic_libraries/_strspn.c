#include "main.h"
#include <stddef.h>

/**
 *_strspn - gets the length of a prefix substring consisting of only
 *the characters found in accept
 *@s: the string to be searched
 *@accept: the string containing the characters to match
 *
 *Return: the number of bytes in the initial segment of s
 *which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && *s != ' ' && *s != '\t')
	{
		if (_strchr(accept, *s) != NULL)
		{
			count++;
			s++;
		}
		else
		{
			break;
		}
	}

	return (count);
}
