#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head: head of linked list
 *
 * Return: sum of data of linked list (int)
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *node = head;

	while (node)
	{
		total += node->n;
		node = node->next;
	}

	return (total);
}
