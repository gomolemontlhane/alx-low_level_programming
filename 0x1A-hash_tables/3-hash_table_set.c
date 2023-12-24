#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 *add_node - Adds a new node to the hash table
 *@ht: The hash table to add to
 *@key: The key of the new node
 *@value: The value of the new node
 *
 *Return: 1 if successful, 0 otherwise
 */
int add_node(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	index = key_index((unsigned char *) key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/**
 *hash_table_set - Adds or updates an element in the hash table
 *@ht: The hash table to modify
 *@key: The key of the element
 *@value: The value of the element
 *
 *Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	current_node = ht->array[key_index((unsigned char *) key, ht->size)];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (current_node->value == NULL)
				return (0);
			return (1);
		}

		current_node = current_node->next;
	}

	return (add_node(ht, key, value));
}
