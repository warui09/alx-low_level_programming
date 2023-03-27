#include "main.h"

/**
 *swap_int - swap the value of two integers
 *@a: should contain value of b
 *@b: should contain value of a
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
