#include "main.h"

/**
 * _sqrt_helper - recursive helper function to calculate square root
 *
 * @n: number to calculate square root of
 * @min: minimum possible value of square root
 * @max: maximum possible value of square root
 *
 * Return: integer square root of n
 */

int _sqrt_helper(int n, int min, int max)
{
	if (max < min)
	{
		return (-1);
	}
	else
	{
		int guess = (min + max) / 2;

		if (guess * guess == n)
			return (guess);
		else if (guess * guess < n)
			return (_sqrt_helper(n, guess + 1, max));
		else
			return (_sqrt_helper(n, min, guess - 1));
	}
}

/**
 *_sqrt_recursion - caculate the square root of a number recursively
 *
 *@n: number to get square root of
 *
 *Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_helper(n, 0, n));
}
