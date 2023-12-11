#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: the destination string
 *@src: the source string
 *
 *Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; /*Don't forget to add the null byte at the end */

	return (start);
}
