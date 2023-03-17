#include <stdio.h>

/**
 *main - entry point
 *Description: print out numbers in ascending order
 *and seperate them with commas and spaces
 *
 *Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
