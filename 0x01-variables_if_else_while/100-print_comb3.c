#include <stdio.h>

/**
 *main - entry point
 *Description: print double digit numbers in acsending
 *order using putchar
 *
 *Return: 0 on success
 */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j > i; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '8' && j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
