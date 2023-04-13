#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates n bytes of s2 to s1
 *
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2 to concatenate to s1
 *
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		a = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		a = malloc(sizeof(char) * (len1 + n + 1));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		a[i] = s1[i];
	for (j = 0; j < n && j < len2; j++)
		a[i + j] = s2[j];
	a[i + j] = '\0';

	return (a);
}
