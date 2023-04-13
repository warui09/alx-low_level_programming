#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - concatenates n bytes of s2 to s1
 *
 *@s1: string one
 *@s2: string two
 *@n: number of bytes of s2 to concatenate to s1
 *
 *Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *a;

	i = strlen(s1);
	l = strlen(s2);
	a = malloc(sizeof(s1) + sizeof(char) * n + 1);
	if (a == NULL)
		return (NULL);
	if (n >= l)
		n = l;
	for (k = 0; k < i; k++)
		a[k] = s1[k];
	for (j = 0; j < n; j++)
		a[j + k] = s2[j];
	return (a);
}
