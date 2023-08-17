#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: head of linked list
 * @idx: index to insert new node
 * @n: data to be inserted into node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	temp = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	while (temp)
	{
		if (i == idx)
		{
			new_node->prev = temp->prev;
			new_node->next = temp;
			if (temp->prev)
				temp->prev->next = new_node;
			temp->prev = new_node;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}
	if (i == idx)
	{
		temp->prev->next = new_node;
		new_node->prev = temp->prev;
		new_node->next = temp;
		temp->prev = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
