#include <stdio.h>

/**
 * main - entry point for the program
 * Description: Print out alphabets in lower case
 *
 * Return: return 0 on success
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
