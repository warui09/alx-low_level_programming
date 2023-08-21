#include "main.h"

/**
 *_strcmp - compare two strings
 *@s1: string one
 *@s2: string two
 *Return: 0 if both strings are equal
 *a negative value if s1 is less than s2
 *a positive value if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
        int i;

        i = 0;
        while (s1[i] != '\0' && s2[i] != '\0')
        {
                if (s1[i] != s2[i])
                {
                        return (s1[i] - s2[i]);
                }
                i++;
        }
        return (s1[i] - s2[i]);
}
