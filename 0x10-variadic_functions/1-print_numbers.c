#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 *print_numbers - prints numbers followed by a new line
 *
 *@separator: string to be printed between the numbers
 *@n: number of integers passed to the function
 *
 *Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int start;

	va_start(ap, n);

	if (n == 0)
		return;

	if (separator == NULL)
		separator = "";

	start = 0;

	for (i = 0; i < n; i++)
	{
		if (start)
			printf("%s%d", separator, va_arg(ap, int));
		else
			printf("%d", va_arg(ap, int));
		start = 1;
	}
	printf("\n");
}
