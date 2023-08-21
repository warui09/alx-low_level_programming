#include "main.h"

/**
 *_isupper - check if char is uppercase alphabet
 *@c: char to be checked
 *Return: 1 if c is uppercase
 *else 0
 */

int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        else
                return (0);
}
