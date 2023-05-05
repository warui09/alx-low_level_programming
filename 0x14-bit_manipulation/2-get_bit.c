#include "main.h"

/**
 *get_bit - returns the value of a bit at a given index
 *@n: int to check the bit at the provided index
 *@index: position to check bit
 *
 *Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a;

	a = 1 << index;

	if ((n & a) > 0)
		return (1);
	else
		return (0);

	return (-1);
}
