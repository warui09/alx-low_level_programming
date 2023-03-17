#include <stdio.h>

/**
 *main - entry point
 *Description: use putchar to print lowercase alphabet
 *in reverse
 *
 *Return: 0 on success
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
