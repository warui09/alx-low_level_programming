#include "main.h"

/**
 *_strcpy - copy string to a buffer
 *@dest: copy string to this buffer
 *@src: copy this string
 *Return: value of the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
        int i;

        i = 0;
        while (src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] =  '\0';
        return (dest);
}
