#include "lists.h"
#include <stdlib.h>

/**
 *listint_len - returns the number of elements in a linked listint_t list
 *@h: linked list
 *
 *Return: numer of nodes in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	for (; h; h = h->next)
		i++;

	return (i);
}
