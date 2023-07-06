#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get
 *            from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: int
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int j;

	i = n ^ m;
	j = 0;

	while (i != 0)
	{
		j += i & 1;
		i >>= 1;
	}

	return (j);
}
