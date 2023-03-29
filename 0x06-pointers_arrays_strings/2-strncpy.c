#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string src is copied to this buffer
 * @src: string to copy
 * @n: copy n bytes from src
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
