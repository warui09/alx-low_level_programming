#include "main.h"
#define NULL ((void *)0)

/**
 * _strstr - locate a substring
 * @haystack: string to search in
 * @needle: string to locate
 *
 * Return: pointer to the beginning of the located substring,
 *or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
        int i, j;

        for (i = 0; haystack[i] != '\0'; i++)
        {
                for (j = 0; needle[j] != '\0'; j++)
                {
                        if (needle[j] != haystack[i + j])
                                break;
                }
                if (needle[j] == '\0')
                        return (haystack + i);
        }
        return (NULL);
}