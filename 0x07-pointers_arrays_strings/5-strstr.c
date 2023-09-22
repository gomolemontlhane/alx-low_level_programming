#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to find
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *sub_needle = needle;

		while (*sub_needle && *haystack && *haystack == *sub_needle)
		{
			haystack++;
			sub_needle++;
		}

		if (!*sub_needle)
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
