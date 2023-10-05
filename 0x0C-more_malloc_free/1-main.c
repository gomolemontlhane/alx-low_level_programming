/* 1-main.c */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code for 1-string_nconcat.c
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
