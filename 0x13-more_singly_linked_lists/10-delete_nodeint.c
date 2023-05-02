#include "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index - deletes the node at index of a linked list
 *@head: pointer to the head of the list
 *@index: index to delete node at
 *
 *Return
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	i = 0;
	temp = *head;

	if (index == 0)
	{
		temp = (*head)->next;
		free(head);
		*head = temp;
	}

	while (*head)
	{
		if (i - 1 == index)
		{
			temp->next = temp->next->next;
			free((*head)->next);
			(*head)->next = temp->next;
			return (1);
		}

		temp = temp->next;
	}

	return (-1);
}
