#include "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index - deletes the node at index of a linked list
 *@head: pointer to the head of the list
 *@index: index to delete node at
 *
 *Return: 1 on success and -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *prev;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	prev = *head;
	temp = (*head)->next;

	for (i = 1; temp; i++)
	{
		if (i == index)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}

		prev = temp;
		temp = temp->next;
	}

	return (-1);
}
