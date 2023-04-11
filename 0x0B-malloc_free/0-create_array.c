#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars
 *
 *@size: size of the array
 *@c: char to initialize the array with
 *
 *Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		a = (char *) malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
	}
	return (a);
}
