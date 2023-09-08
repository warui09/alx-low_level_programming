#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key at which to retrieve information
 *
 * Return: string
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((const unsigned char *) key, 1024);

	if (!ht->array[index])
		return (NULL);

	return (ht->array[index]->value);
}
