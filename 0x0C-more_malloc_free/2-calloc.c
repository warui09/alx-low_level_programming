#include "main.h"
#include <stdlib.h>

/**
 * _calloc - create an array and initialize it to 0
 *
 * @nmemb: number or sub-arrays
 * @size: size of each sub-array
 *
 *Return: char
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (!a)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		a[i] = 0;

	return (a);
}
