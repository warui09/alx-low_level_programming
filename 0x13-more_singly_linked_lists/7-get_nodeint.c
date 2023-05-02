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
	listint_t *temp1, *temp2;

	temp1 = head;
	while (head)
	{
		if (temp1->n == (int) index)
			temp2 = temp1;
		return (temp2);
		temp1 = temp1->next;
	}

	return (NULL);
}
