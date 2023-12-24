#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 *hash_table_set - Adds an element to the hash table
 *@ht: The hash table to add/update the key/value to
 *@key: The key string (cannot be an empty string)
 *@value: The value associated with the key (must be duplicated)
 *
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	/*Check if the key already exists, update its value */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value); /*Free previous value */
			current_node->value = strdup(value); /*Update value */
			if (current_node->value == NULL)
				return (0); /*Memory allocation failed */
			return (1); /*Success */
		}

		current_node = current_node->next;
	}

	/*Key doesn't exist, add a new node at the beginning of the list */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0); /*Memory allocation failed */

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0); /*Memory allocation failed */
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1); /*Success */
}
