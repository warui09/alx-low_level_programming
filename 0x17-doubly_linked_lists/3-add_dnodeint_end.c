#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: head of the linked list
 * @n: int to add at the end of linked list
 *
 * Return: address of new element or NULL if failed
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *new_node;

	node = *head;
	new_node = malloc(sizeof(dlistint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!node)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	while (node->next && node->next != *head)
	{
		node = node->next;
	}

	new_node->prev = node;
	node->next = new_node;

	return (new_node);
}
