#include "main.h"

/**
 *_strncpy - copies up to n characters from the string pointed to by src,
 *including the null byte, to the buffer pointed to by dest
 *@dest: the buffer to copy to
 *@src: the string to be copied
 *@n: the maximum number of characters to copy
 *
 *Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0'; /*Pad the remaining characters with null bytes */
		dest++;
		n--;
	}

	return (start);
}
