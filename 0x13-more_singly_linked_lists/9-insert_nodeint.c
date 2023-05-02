#include "lists.h"
#include <stdlib.h>

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to the start of the list
 *@idx: index to insert the new node
 *@n: value of n field of the node
 *
 *Return: pointer to the new_node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	i = 0;
	temp = *head;
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	while (temp)
	{
		if (i + 1 == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		
		i++;
		temp = temp->next;
	}

	return (NULL);
}
