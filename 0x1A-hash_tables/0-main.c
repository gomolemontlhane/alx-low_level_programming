#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 *main - Checks the code for task 0
 *
 *Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	if (ht == NULL)
	{
		fprintf(stderr, "Failed to create hash table\n");
		return (EXIT_FAILURE);
	}

	printf("%p\n", (void *)ht);
	return (EXIT_SUCCESS);
}
