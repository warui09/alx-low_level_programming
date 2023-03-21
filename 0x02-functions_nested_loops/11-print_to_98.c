#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - print natural numbers from n to 98
 *@n: number to start printing from
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else if (n > 98)
	{
		for (i = 98; i <= n; i++)
		{
			printf("%d", i);
			if (i != n)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else
	{
		printf("%d", 98);
	}
	printf("\n");
}
