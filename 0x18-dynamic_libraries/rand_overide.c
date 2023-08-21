#include <stdlib.h>

/**
 * srand- Override the srand function to do nothing
 * @seed: random seed
 * Return: nothing
 */

void srand(unsigned int seed) {}

/**
 * rand -  Override the rand function to always return 1
 * Return: Always 1
 */

int rand(void)
{
	return (1);
}

