#include "main.h"

/**
 *_strlen -  calculate the length of a string
 *@s: string to calculate length
 *Return: int
 */

int _strlen(char *s)
{
        int n;

        n = 0;
        while (*s != '\0')
        {
                n++;
                s++;
        }
        return (n);
}
