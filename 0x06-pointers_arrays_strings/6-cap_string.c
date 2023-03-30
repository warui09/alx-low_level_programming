#include "main.h"

/**
 * cap_string - capitalize every word in a string
 * @str: string to capitalize
 * Return: char
 */

char *cap_string(char *str)
{
	char *p = str;

	int capitalize = 1;

	char pn[] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')',
		'{', '}'};


	int num_pn = sizeof(pn) / sizeof(pn[0]);

	while (*p)
	{
		if (capitalize && (*p >= 'a' && *p <= 'z'))
		{
			*p -= 32;
			capitalize = 0;
		}
		else
		{
			int i;

			for (i = 0; i < num_pn; i++)
			{
			if (*p == pn[i])
			{
			capitalize = 1;
			break;
			}
		}
		if (i == num_pn)
		{
			capitalize = 0;
		}
	}
	p++;
	}
	return (str);
}
