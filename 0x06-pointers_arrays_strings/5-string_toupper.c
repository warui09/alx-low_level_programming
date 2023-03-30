#include "main.h"

/**
 *string_toupper - change lowercase letters to uppercase
 *@str: string to convert to uppercase
 *Return: char
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
			*p = *p - ('a' - 'A');
		p++;
	}
	return (str);
}
