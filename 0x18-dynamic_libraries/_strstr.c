#include "main.h"
#include <stddef.h>

/**
 *_strstr - locates a substring in a string
 *@haystack: the string to be searched
 *@needle: the substring to search for
 *
 *Return: a pointer to the beginning of the located substring,
 *or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *startHaystack = haystack;
		char *subNeedle = needle;

		while (*haystack != '\0' && *subNeedle != '\0' && *haystack == *subNeedle)
		{
			haystack++;
			subNeedle++;
		}

		if (*subNeedle == '\0')
		{
			return (startHaystack); /*Found the substring, return the pointer */
		}

		haystack = startHaystack + 1; /*Move to the next character in haystack */
	}

	/*If the substring is not found, return NULL */
	return (NULL);
}
