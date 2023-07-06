#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number to convert
 *
 * Return: converted number or 0 if failed
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	size_t len;
	size_t i;

	result = 0;
	len = strlen(b);

	if (b == NULL)
		return (0);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result <<= 1;
		result += b[i] - '0';
	}

	return (result);
}
