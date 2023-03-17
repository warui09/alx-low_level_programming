#include <stdio.h>

/**
 *main - entry point
 *Description: print 4 digits in pairs of two in ascending order
 *separated by , and spaces
 *
 *Return: 0 on success
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				for (d = c + 1; d <= '9'; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
