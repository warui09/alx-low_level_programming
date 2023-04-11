#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - return a pointer to a 2 dimensional
 *array initialized to 0 for all elements
 *
 *@width: number of elements in each sub-array
 *@height: number of sub-arrays
 *
 *Return: int **
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
