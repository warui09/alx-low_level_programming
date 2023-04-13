#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - create an array and initialize it to 0
 *
 * @nmemb: number or arrays
 * @size: size of each sub-array
 *
 *Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	void **a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * sizeof(void *));
	if (!a)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		a[i] = malloc(size * sizeof(char));
		if (!a[i])
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
		memset(a, 0, nmemb * size);
	}

	return (a);
}
