#include "main.h"

/**
 *_strstr - Function to find the first occurrence of a substring in a string
 *@haystack:
 *@needle:
 *
 */
char *_strstr(char *haystack, char *needle)
{
    if (*needle == '\0')
    {
        return haystack;
    }

    while (*haystack != '\0')
    {
        char *h = haystack;
        char *n = needle;

        while (*n != '\0' && *h == *n)
	{
            h++;
            n++;
        }

        if (*n == '\0')
	{
	  return (haystack);
        }

        haystack++;
    }

    return (NULL);
}
