#include "main.h"

/**
 *factorial - return the factorial of a number
 *
 *@n: number to calculate the factorial of
 *
 *Return: -1 if n < 0. int otherwise
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
