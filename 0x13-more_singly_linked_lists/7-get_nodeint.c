#include "lists.h"
#include <stdlib.h>

/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *@head: pointer to the head of the list
 *@index: the position of the node to return
 *
 *Return: the node at index value or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	temp = head;
	i = 0;

	while (temp)
	{
		if (i == index)
			return (temp);

		i++;
		temp = temp->next;
	}

	return (NULL);
}
