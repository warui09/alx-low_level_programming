#include "main.h"

/**
 *puts2 - print every other character starting
 *with the first one
 *@str: string to print
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
