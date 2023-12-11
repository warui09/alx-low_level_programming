#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using the
 *                 Binary search algorithm
 * @array: Pointer to the array to search
 * @size: Size of the array to search
 * @value: Value to search for in the array
 * Return: Index at which value is found, or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid, i;

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i == end)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		if (array[mid] == value)
		{
			return ((int) mid);
		}
		else if (array[mid] < value)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}

	return (-1);
}
