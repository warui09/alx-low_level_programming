#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - return a pointer to copy of a string
 *
 *@str: string to copy
 *
 *Return: char *
 */

char *_strdup(char *str)
{
	char *a;
	int i, j;

	if (str == NULL)
		return (NULL);
	a = (char *) malloc(sizeof(char) * strlen(str));
	if (a == NULL)
		return (NULL);
	for (i = 0, j = 0; str[j] != '\0'; i++, j++)
	{
		a[i] = str[j];
	}
	return (a);
}
