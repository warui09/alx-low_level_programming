#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function
 *print minimum amount of coins to make change
 *
 *@argc: argument count
 *@argv: argument array
 *
 *Return: 0
 */

int main(int argc, char **argv)
{
	int total, cents, num25, num10, num5, num2;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num25 = 0;
	num10 = 0;
	num5 = 0;
	num2 = 0;
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", 0);
	}
	num25 = cents / 25;
	cents = cents % 25;
	num10 = cents / 10;
	cents = cents % 10;
	num5 = cents / 5;
	cents = cents % 5;
	num2 = cents / 2;
	cents = cents % 2;
	total = num25 + num10 + num5 + num2 + cents;
	printf("%d\n", total);
	return (0);
}
