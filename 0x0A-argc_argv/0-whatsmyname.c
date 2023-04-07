#include "main.h"
#include <stdio.h>

/**
 *main - print the name of the function
 *
 *@argc: argument count
 *@argv: argument array
 *Return: void
 */

int main(int argc, char **argv)
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
