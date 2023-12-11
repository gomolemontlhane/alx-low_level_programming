#include "main.h"

/**
 *_memset - fills the first n bytes of the memory area pointed to by s
 *with the constant byte b
 *@s: the memory area to be filled
 *@b: the constant byte to fill with
 *@n: the number of bytes to be filled
 *
 *Return: the pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (s);
}
