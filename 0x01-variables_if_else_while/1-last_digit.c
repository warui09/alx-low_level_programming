#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of the program
 * Description: Print a random number and a string
 * explaining if it larger, smaller or equal to 5
 *
 * Return: return 0 on success
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n,last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("The last digit of %d is %d and is less than 6 an not 0\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, last_digit);
	}

	return (0);
}
