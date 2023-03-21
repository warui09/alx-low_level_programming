#include <stdio.h>

/**
 *main - entry point
 *Description: check for lower and upper case alphabet
 *
 *Return: 1 if lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c);

int main(void)
{
	int r;

	r = _isalpha('H');
	return (0);
}

int _isalpha(int c)
{
	int i;

	for (i = 'A' 
