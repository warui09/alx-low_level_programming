#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: appends src to this string
 * @src: appends to dest
 * @n: append n characters of src to dest
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
