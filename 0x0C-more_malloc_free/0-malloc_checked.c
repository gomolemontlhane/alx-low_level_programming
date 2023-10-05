/* 0-malloc_checked.c */

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of the memory to allocate
 *
 * Return: A pointer to the allocated memory
 *         Terminate process with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
