#include <stdio.h>

/**
 *main - entry point
 *Description: print base 10 numbers using putchar
 *
 *Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
