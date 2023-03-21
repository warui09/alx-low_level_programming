#include "main.h"

/**
 *print_last_digit - print last digit of given integer
 *@n: integer to return the last digit of
 *Return: Always int
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
		n = -n;
	i = n % 10;
	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
