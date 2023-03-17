#include <stdio.h>

/**
 * main - entry point for the program
 * Description: Print lower case and upper case
 * characters
 *
 * Return: 0 on success
 */

int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');

	return (0);
}
