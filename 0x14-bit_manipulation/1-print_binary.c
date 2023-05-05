#include "main.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: number to print as binary
 *
 *Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;

	mask = (1UL << (sizeof(unsigned long int) * 2 - 1));

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}
