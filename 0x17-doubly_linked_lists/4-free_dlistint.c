#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of linked list to free
 *
 * Return: nothing
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	if (!head)
		return;

	while (node)
	{
		node = node->next;
		free(node);
	}

	free(head);
}
