#include "lists.h"
#include <stdlib.h>

/**
 *list_len - returns the number of elemnts in list h
 *@h: linked list
 *
 *Return: Always size_t
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	for (; h; h = h->next)
		i++;

	return (i);
}
