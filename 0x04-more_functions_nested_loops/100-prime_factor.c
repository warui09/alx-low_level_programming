#include <stdio.h>
#include <math.h>

/**
 *main - entry
 *Description: calculate and print the largest prime factor
 *Return: always 0
 */

int main(void)
{
	unsigned long n;
	int i;

	n = 612852475143;
	for (i = (int) sqrt(n); i > 2; i++)
	{
		if (n % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return (0);
}
