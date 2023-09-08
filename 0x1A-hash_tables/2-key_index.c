#include "hash_tables.h"
#include <stdio.h>

/**
 * key_index - returns the index of a key
 * @key: key to find index of
 * @size: size of the array
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index;

	key_index = hash_djb2((unsigned char *) key);

	return (key_index % size);
}
