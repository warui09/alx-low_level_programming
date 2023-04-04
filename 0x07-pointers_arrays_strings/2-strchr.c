#include "main.h"
#define NULL ((void *)0)

/**
 *_strchr - locate a character in a string
 *@s: string
 *@c: char
 *Return: char
 */

char *_strchr(char *s, char c)
{
	int i;
	char *a = s;

	a = NULL;
	if (c == '\0')
	{
		return (a);
	}
	else
	{
		for (; *s != '\0'; s++)
		{
			if (*s == c)
			{
				a = *s;
				break;
			}
		}
	}
	return (a);
}
