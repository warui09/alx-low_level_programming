#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node_end - add a node to end of a list
 *@head: head of the list
 *@str: value of str field of new node
 *
 *Return: pointer to the head of the linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i;
	
	i = malloc(sizeof(list_t));
	if (!i)
		return (NULL);

	i->str = strdup(str);
	i->len = strlen(str);
	i->next = NULL;

	if (!head)
		*head = i;
	return (*head);
}
