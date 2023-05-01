#include "lists.h"
#include <stdlib.h>

/**
 *free_listint2 - frees a listint_t list
 *@head: pointer to the head of the list
 *
 *Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
