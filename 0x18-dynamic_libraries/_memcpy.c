#include "main.h"

/**
 *_memcpy - copy memory area
 *@dest: copy to this memory area
 *@src: copy from this memory area
 *@n: copy n number of bytes
 *Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                dest[i] = src[i];
        }
        return (dest);
}
