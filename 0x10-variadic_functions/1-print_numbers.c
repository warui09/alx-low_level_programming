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
	int arg;

	va_start(ap, n);

	if (n == 0)
		return;

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		arg = va_arg(ap, int);
		printf("%d", arg);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
