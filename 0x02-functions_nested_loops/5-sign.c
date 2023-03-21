#include "main.h"

/**
 *print_sign - print sign of a number
 *Description: print sign of a number and 1 if number is greater than 0
 *0 if the number is 0
 *-1 if the number is negative
 *@n: the number to be checked
 *Return: 1, 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
