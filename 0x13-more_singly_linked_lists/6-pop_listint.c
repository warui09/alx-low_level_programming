#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: pointer to the head of the list
 *
 *Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (!*head)
	{
		return (0);
	}
	else
	{
		i = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (i);
	}
}
