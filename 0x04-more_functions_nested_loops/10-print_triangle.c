#include "main.h"

/**
 *print_triangle - print triangle
 *@size: height of triangle
 */

void print_triangle(int size)
{
	int i, j, k, n;

	n = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = n; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
