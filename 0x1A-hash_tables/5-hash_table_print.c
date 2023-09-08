#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int first = 1;
	hash_node_t *node;

	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}

		i++;
	}

	printf("}\n");
}
