#include <stdio.h>

/**
 *main - entry point
 *	 prints name of file it was compiled from
 *
 *Return: always 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
