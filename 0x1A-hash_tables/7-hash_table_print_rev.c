#include "hash_tables.h"
#include <stdio.h>

/**
 *hash_table_print_rev - Prints a hash table in reverse order
 *@ht: The hash table
 */
void hash_table_print_rev(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = ht->size - 1; i < ht->size; i--)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			if (node->next != NULL)
				printf(", ");
			node = node->next;
		}
	}

	printf("}\n");
}
