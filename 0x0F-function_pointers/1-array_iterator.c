#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - execute a function given as a
 *parameter on each element of array
 *
 *@array: array to call the callback function on
 *each of the elements
 *@size: size of the array
 *@action: pointer to the callback function
 *
 *Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action ==NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
