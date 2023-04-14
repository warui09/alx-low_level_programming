#include "main.h"
#include <stdlib.h>

/**
 *_realloc - reallocates a block of memory using malloc and free
 *
 *@ptr: pointer to memory previously allocated with malloc
 *@old_size: size in bytes for the allocated space for ptr
 *@new_size: size in bytes for the new block of memory
 *
 *Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *a;

	if (new_size == old_size)
		return (ptr);
	
	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	a = malloc(new_size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		a[i] = *((char *)ptr + i);
	
	return (a);
}
