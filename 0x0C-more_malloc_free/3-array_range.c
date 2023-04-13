#include "main.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers
 *
 *@min: smallest value of integer
 *@max: largest value of integer
 *
 *Return: int
 */

int *array_range(int min, int max)
{
	int i, range;
	int *a;

	range = max - min + 1;
	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * range);
	if (!a)
		return (NULL);
	for (i = 0; min <= max; i++)
		a[i] = min++;
	return (a);
}

