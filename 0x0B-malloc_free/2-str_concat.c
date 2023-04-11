#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenate two strings
 *@s1: first string
 *@s2: second string
 *
 *Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, k;

	if (s1 == NULL)
	{
		s1 = "";
		i = 0;
	}
	else
	{
		i = strlen(s1);
	}
	if (s2 == NULL)
	{
		s2 = "";
		j = 0;
	}
	else
	{
		j = strlen(s2);
	}
	a = (char *) malloc(sizeof(char) * i + sizeof(char) * j + 1);
	if (a == NULL)
		return (NULL);
	for (k = 0; k < i; k++, s1++)
	{
		a[k] = *s1;
	}
	for (k = i; k < i + j; k++, s2++)
	{
		a[k] = *s2;
	}
	return (a);
}
