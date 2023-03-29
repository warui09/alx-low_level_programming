#include "main.h"

/**
 *reverse_array - reverse the contents of an array
 *@a: array to reverse
 *@n: size of the array
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}

