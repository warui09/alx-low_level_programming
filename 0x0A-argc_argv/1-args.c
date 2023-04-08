#include "main.h"
#include <stdio.h>

/**
 *main - main function
 *prints the number of arguments passed to it
 *
 *@argc: argument count
 *@argv: argument array
 *
 *Return: 0
 */

int main(int argc, char **argv)
{
	if (argv)
		printf("%d\n", argc);
	return (0);
}
