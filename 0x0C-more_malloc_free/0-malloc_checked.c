#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocate memory using malloc
 *
 *@b: size of memory to allocate
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
