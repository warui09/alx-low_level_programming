#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 *print_all - prints all arguments it is passed
 *
 *@format: format of the arguments
 *
 *Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	char *separator;
	char *a;

	va_start(ap, format);
	i = 0;
	separator = "";
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ap, double));
					break;
				case 's':
					a = va_arg(ap, char *);
					if (a == NULL)
						printf("(nil)");
					printf("%s%s", separator, a);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
		printf("\n");
	}
	va_end(ap);
}
