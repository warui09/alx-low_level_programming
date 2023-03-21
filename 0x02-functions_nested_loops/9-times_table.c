#include "main.h"

/**
 *times_table - print times table of 9
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (k >= 10)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(k + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	
}
