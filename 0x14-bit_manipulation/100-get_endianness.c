#include "main.h"

/**
 * get_endianness - get endianness
 *
 * Return: int
 *
 */

int get_endianness(void)
{
	int i = 0x76543210;
	char *a = (char *) &i;

	if (*a == 0x10)
		return (1);
	return (0);
}

