#include <stdio.h>

/**
 *main - entry point
 *Description: print 4 digits in ascending order in pairs that are
 *separeted by , and a space
 *
 *Return: 0 on success
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= b - 1; a++)
	{
		for (b = '0'; b <= c - 1; b++)
		{
			for (c = '0'; c <= d - 1; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (b != '8')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

