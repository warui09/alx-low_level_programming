#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node - add a new node at the beginning of a list_t list
 *@head: first node in the list
 *@str: string
 *
 *Return: pointer to the first node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
