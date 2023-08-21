#include "main.h"

/**
 *_isalpha - check if character is alphabet
 *Description: check if provided character is alphabet
 *both lower and upper case
 *@c: character to be checked
 *
 *Return: 1 if lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
                return (1);
        else
                return (0);
}
