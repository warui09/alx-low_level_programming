#include <stdio.h>

/**
 *main - check code
 *Description: prit sum of multiples of 3 or 5 below 1024
 *
 *Return: Always 0
 */

int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
