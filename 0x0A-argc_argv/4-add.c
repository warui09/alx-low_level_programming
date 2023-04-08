#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function
 *adds all numbers passed to it
 *
 *@argc: argument count
 *@argv: argument array
 *
 *Return: 0
 */

int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
