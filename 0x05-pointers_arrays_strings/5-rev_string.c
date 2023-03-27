#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char *start_ptr, *end_ptr, tmp;
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	start_ptr = s;
	end_ptr = s + i - 1;

	while (start_ptr < end_ptr)
	{
		tmp = *start_ptr;
		*start_ptr = *end_ptr;
		*end_ptr = tmp;
		start_ptr++;
		end_ptr--;
	}
}

