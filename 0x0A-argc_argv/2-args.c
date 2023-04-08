#include "main.h"
#include <stdio.h>

/**
 *main - main function
 *prints all arguments it recives
 *
 *@argc: argument count
 *@argv: argument array
 *
 *Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
