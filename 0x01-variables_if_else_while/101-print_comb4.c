#include <stdio.h>

/**
 *main - entry point
 *Description: print out three numbers in ascending order
 *that are all unique seperated by , and a space
 *
 *Return: 0 on success
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 1 + i; j <= '9'; j++)
		{
			for (k = 1 + j; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
