#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print as binary
 *
 * Return: void
 *
 */

void print_binary(unsigned long int n)
{
	int a = 0;
	int size = sizeof(unsigned long int) * 8 - 1;

	if (n == 0)
		_putchar('0');

	while (size >= 0)
	{
		if (n >> size & 1)
		{
			_putchar('1');
			a++;
		}
		else if (a)
		{
			_putchar('0');
		}
		size--;
	}
}

