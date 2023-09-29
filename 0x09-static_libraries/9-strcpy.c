#include "main.h"

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'; /* Null-terminate the string */
	return dest_start;
}
