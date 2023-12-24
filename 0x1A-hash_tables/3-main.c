#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *main - Check the code for task 3
 *
 *Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	return (EXIT_SUCCESS);
}
