#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - create an array and initialize it to 0
 *
 * @nmemb: number of elemts in array
 * @size: size of each element
 *
 *Return: char
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);

	memset(a, 0, nmemb * size);

	return (a);
}
