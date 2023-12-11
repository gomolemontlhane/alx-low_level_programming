#include "main.h"

/**
 *_strcpy - copies the string pointed to by src, including the null byte,
 *to the buffer pointed to by dest
 *@dest: the buffer to copy to
 *@src: the string to be copied
 *
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; /*Don't forget to add the null byte at the end */

	return (start);
}
