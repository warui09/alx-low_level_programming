#include <stdio.h>

/**
 *main - entry point
 *Description: print lowercase alphabet followed by a string
 *
 *Return: 0 on success
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

