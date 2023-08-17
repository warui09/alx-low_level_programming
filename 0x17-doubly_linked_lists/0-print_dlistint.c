#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of a doubly linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *node = h;

	while (node)
	{
		printf("%i\n", node->n);
		num++;

		if (node->next == h)
			break;

		node = node->next;
	}

	return (num);
}
