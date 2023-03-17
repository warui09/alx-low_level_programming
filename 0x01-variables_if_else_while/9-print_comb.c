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

	for (i = '0'; i < '10'; i++)
	{
		if (i != '9')
		{
			putchar(i);
			putchar(,);
			putchar('\s');
		}
		else
		{
			putchar(i);
		}
	}
	return (0);
}
