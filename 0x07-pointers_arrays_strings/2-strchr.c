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
	char *a;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			a = &s[i];
			break;
		}
	}
	if (s[i + 1] == '\0')
		return &s[i + 1];
	return (a);
}
