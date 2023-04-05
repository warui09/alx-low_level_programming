#include "main.h"

/**
 *_pow_recursion - return value of x raised to power y
 *
 *@x: integer to raise to power y
 *@y: integer to multiply x by this number of times
 *
 *Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
