#include "main.h"

/**
 *_memset - fill the first n bytes of memory with a constant byte
 *@s: beggining of the buffer to start writing the constant byte
 *@b: constant byte
 *@n: number of bytes to write t
 *Return: beginning of buffer the function has written to
 */

char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                s[i] = b;
        }

        return (s);
}
