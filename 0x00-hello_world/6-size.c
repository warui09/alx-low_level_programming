#include <stdio.h>

/**
 * main - print size of various types 
 * Description: print size of various types on the computer that this code will run on
 * Return 0 on success
 */

int main(void)
{
	printf("The size of a char: %d byte(s)", sizeof(char));
	printf("The size of an int: %d byte(s)", sizeof(int));
	printf("The size of a long int: %d byte(s)", sizeof(long int));
	printf("The size of a long long int: %d byte(s)", sizeof(long long int));
	printf("The size of a float: %d byte(s)", sizeof(float));

	return (0);
}
