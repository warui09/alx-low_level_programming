#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index index of a
 *                             dlistint_t linked list
 * @head: head of linked list
 * @index: index to delete node at
 * Return: 1 0n success, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (!head || !*head)
		return(-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (-1);

	if (temp->next)
		temp->next->prev = temp->prev;

	if (temp->prev)
		temp->prev->next = temp->next;

	free(temp);

	return (1);
}
