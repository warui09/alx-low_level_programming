#include "main.h"
#define NULL ((void *)0)

/**
 *_strpbrk - search a string for any of a set of bytes
 *@s: string to search
 *@accept: any of this substring to search within s
 *Return: char
 */

char *_strpbrk(char *s, char *accept)
{
        int i, j;
        char *a;
        int is_match;

        a = NULL;
        for (i = 0; s[i] != '\0'; i++)
        {
                is_match = 0;
                for (j = 0; accept[j] != '\0'; j++)
                {
                        if (accept[j] == s[i])
                        {
                                is_match = 1;
                                break;
                        }
                }
                if (is_match)
                {
                        a = &s[i];
                        break;
                }
        }
        return (a);
}
