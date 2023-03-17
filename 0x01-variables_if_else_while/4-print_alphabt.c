#include <stdio.h>

/**
 * main - entry point
 * Description: Print lower case letters except q and e
 *
 * Return: 0 on success
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar('\n');

	return (0);
}
