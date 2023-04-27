#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node_end - add a node to end of a list
 *@head: pointer to the head of the list
 *@str: string to be added as the value of the new node
 *
 *Return: pointer to the head of the linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (!head)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
