#include "main.h"

/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@n: pointer to an integer of which to set a bit to 1
 *@index: index on which to set a bit to 1
 *
 *Return: 1 on success -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= 1 << index;

	if (*n > 0)
		return (1);
	else
		return (-1);
}
