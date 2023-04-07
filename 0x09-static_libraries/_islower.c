#include "main.h"

/**
 *_islower - check if lowercase
 *Description: check if character is lowercase
 *@c: the char to check
 *Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
