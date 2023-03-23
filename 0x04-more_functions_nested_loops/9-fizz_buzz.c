#include <stdio.h>

/**
 *main - entry
 *fizz-buzz - print numbers to 1 to 100 seperated by space
 *for multiples of 3 print out fizz instead of number
 *for multiples of 5 print buzz and for multiples of both print
 *fizzbuzz
 *Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
