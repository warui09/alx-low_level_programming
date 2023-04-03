#include <stdio.h>
#include "main.h"

/**
 *print_diagsums -  print sum of two diagonals
 *@a: number of rows
 *@size: number of columns
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	/* get sum of diag1 */
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	/* get sum of diag2 */
	for (j = size - 1; j >= 0; j--)
	{
		sum2 += a[(size - j - 1) * size + j];
	}

	printf("%d, %d\n", sum1, sum2);
}
