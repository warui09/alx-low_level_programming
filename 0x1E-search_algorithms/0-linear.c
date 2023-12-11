#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using the
 *                 Linear search algorithm
 * @array: pointer to the array to search
 * @size: size of the array
 * @value: value to search for in the array
 * Return: EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		if (array[i] == value)
			return (i);

		printf("Value checked array[%li] = [%i]\n", i, array[i]);

		i++;
	}

	return (-1);
}
