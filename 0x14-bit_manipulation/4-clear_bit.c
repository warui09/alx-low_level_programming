#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: pointer to an int
 *@index: index at which to clear a bit
 *
 *Return: 1 on success, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!*n)
		return (-1);

	if ((*n & 1 << index) > 0)
		*n ^= 1 << index;

	if (!((*n & 1 << index) > 0))
		return (1);
	return (-1);
}
