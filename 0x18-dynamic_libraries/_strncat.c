#include "main.h"

/**
 *_strncat - concatenates two strings, using at most n bytes from src
 *@dest: the destination string
 *@src: the source string
 *@n: the maximum number of bytes from src to be appended to dest
 *
 *Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0'; /*Don't forget to add the null byte at the end */

	return (start);
}
