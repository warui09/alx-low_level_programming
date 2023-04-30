#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *@head: pointer to the head of the list
 *@n: int value of the n field of a node
 *
 *Return: Address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (*head);
}
