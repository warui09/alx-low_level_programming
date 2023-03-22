#include <stdio.h>

/**
 *main - check code
 *Description: print 50 first fibonacci numbers
 *fibonacci - print nth fibonacci term
 *@n: print nth fibonnaci term
 *Return: Always 0
 */

unsigned long fibonacci(unsigned long n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (fibonacci(n - 2) + fibonacci(n - 1));
}

int main(void)
{
	int i;

	for (i = 0; i < 50; i++)
		printf("%lu", fibonacci(i));
}
