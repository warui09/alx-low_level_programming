#include <stdio.h>

/**
 *main - entry point
 *Description: print hex numbers in lowercase starting from 0
 *
 *Return: 0 on success
 */

int main(void)
{
	char i;
	char j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
