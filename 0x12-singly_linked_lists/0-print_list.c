#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 *print_list - prints all elements of a list
 *@h: list to print
 *
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;

	for (; h; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", h->len);
			counter++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			counter++;
		}
	}

	return (counter);
}
