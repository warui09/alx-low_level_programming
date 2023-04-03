#include "main.h"

/**
 *_strspn - get length of a prefix substring
 *@s: full string
 *accept: substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != accept[0])
			j++;
		if (s[i] == accept[0])
			break;
	}
	return (j + 1);
}
