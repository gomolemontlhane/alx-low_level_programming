/* 2-calloc.c */

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes with zero
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: A pointer to the allocated memory
 *         NULL if nmemb or size is 0 or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *filler;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	filler = ptr;

	for (i = 0; i < (nmemb * size); i++)
		filler[i] = 0;

	return (ptr);
}
