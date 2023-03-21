#include "main.h"

/**
 *_abs - compute absolute value of an integer
 *@n: integer to be checked
 *Return: void
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (n * -1);
	else
		return (0);
}
