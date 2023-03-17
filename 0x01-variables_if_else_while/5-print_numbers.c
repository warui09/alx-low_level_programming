#include <stdio.h>

/**
 *main - entry point
 *Description: print base 10 numbers starting at 0
 *
 *Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
