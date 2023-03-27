#include "main.h"
#include <stdio.h>

/**
 *print_array - print n elements of an array
 *@a: array to print elements of
 *@n: print elements of a up to this point
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
