#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 *               Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	double jump = sqrt((double)size);

	while (i < size && array[i] < value)
	{
		i += jump;

		if (i >= size)
		{
			i = size - 1;
			break;
		}
	}

	while (array[i] > value)
	{
		i--;
		printf("Value checked array[%li] = [%i]\n", i, array[i]);

		if (i == 0 || i == (size_t)(jump - 1))
		{
			return (-1);
		}
	}

	if (array[i] == value)
	{
		printf("Found %i at index: %li\n", array[i], i);
		return ((int) i);
	} else
	{
		return (-1);
	}
}
