#include <stdio.h>

/**
 *main - entry point
 *Description: check for lowercase
 *
 *Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c);

int main(void)
{
	int r;

	r = _islower('H');
	return (0);
}

int _islower(int c)
{
	if (97 <= c || c <= 122)
		return (1);
	else
		return (0);
}
