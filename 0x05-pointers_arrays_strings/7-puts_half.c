#include "main.h"

/**
 *puts_half - print second half of string
 *@str: string to be printed
 */

void puts_half(char *str)
{
	int i, j, half;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		half = i / 2;
	else
		half = i - ((i - 1) / 2);
	for (j = half; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}

