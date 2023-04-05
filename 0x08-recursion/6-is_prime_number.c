#include "main.h"

/**
 *is_prime_helper - this is a helper function that
 *actually checks if the number is prime
 *
 *@n: number to check
 *@divisor: number to divide n by and check for remeinder
 *
 *Return: int
 */

int is_prime_helper(int n, int divisor)
{
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_helper(n, divisor - 1));
}

/**
 *is_prime_number - check if number is prime by calling helper function
 *
 *@n: number to check
 *
 *Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, n - 1));
}
