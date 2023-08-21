#include "main.h"

/**
 *_strspn - get length of a prefix substring
 *@s: full string
 *@accept: substring
 *Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int i, j, k;
        int is_match;

        k = 0;
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
                if (!is_match)
                        break;
                k++;
        }
        return (k);
}
