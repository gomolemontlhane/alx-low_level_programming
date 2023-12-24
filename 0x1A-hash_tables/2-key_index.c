#include "hash_tables.h"

/**
 *key_index - Get the index of a key in the hash table array
 *@key: The key string
 *@size: The size of the hash table array
 *
 *Return: The index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	/*Get the hash value using the djb2 hash function */
	hash = hash_djb2(key);

	/*Calculate the index where the key/value pair should be stored */
	return (hash % size);
}
