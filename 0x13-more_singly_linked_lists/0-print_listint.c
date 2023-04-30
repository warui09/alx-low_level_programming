#include "lists.h"
#include <stdio.h>

/**
 *print_listint - prints all the elements of a listint_t list
 *@h: list to print
 *
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		i++;
	}

	return (i);
}
