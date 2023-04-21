#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - entry point
 *@argc: argument count
 *@argv: argument vector
 *Return: Always 0
 */

int main(int argc, char **argv)
{
	char *s;
	int a, b, c;

	s = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	if (*s != '+' && *s != '-' && *s != '/' && *s != '%' && *s != '*')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*s == '/' && b == 0) || (*s == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	c = (*get_op_func(s))(a, b);
	printf("%d\n", c);
	return (0);
}
