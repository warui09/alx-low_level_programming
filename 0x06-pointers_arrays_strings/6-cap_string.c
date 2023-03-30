#include "main.h"

/**
 *cap_string - capitalize every word in a string
 *@str: string to cpitalize
 *Return: char
 */

char *cap_string(char *str)
{
	char *p = str;
	int capitalize;

	capitalize = 1;
	while (*p)
	{
		if (capitalize && (*p >= 'a' && *p <= 'z'))
		{
			*p -= 32;
			capitalize = 0;
		}
		else if (*p == ' ' || *p == '\t' || *p == '\n' || *p == ',' || \
				*p == ';' || *p == '.' || *p == '!' || \
				*p == '?' || *p == '"' || *p == '(' || \
				*p == ')' || *p == '{' || *p == '}')
		{
			capitalize = 1;
		}
		else
		{
			capitalize = 0;
		}
		p++;
	}
	return (str);
}
