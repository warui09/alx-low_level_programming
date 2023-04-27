#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: list to free
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *a;

	while (head)
	{
		a = head;
		a = a->next;
		free(a->str);
		free(a);
	}
}
