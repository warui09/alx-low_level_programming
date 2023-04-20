#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - prints strings followed by a new line
 *
 *@separator: string to be printed between the strings
 *@n:  number of strings passed to the function
 *
 *Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	const char *str;

	if (n == 0)
		return;
	
	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, const char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != n -1)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
