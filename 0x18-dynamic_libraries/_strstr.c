#include "main.h"

/**
	* _strstr: find the first occurrence of a substring in a string
	* @haystack:
	* @needle:
	*
	* Return:
**/
char *_memcpy(char *dest, char *src, unsigned int n) {
    char *dest_start = dest;

    while (n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    return dest_start;
}

/* Function to search a string for any of a set of characters */
char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        char *a = accept;
        while (*a != '\0') {
            if (*s == *a) {
                return s;
            }
            a++;
        }
        s++;
    }

    return NULL;
}

/* Function to find the first occurrence of a substring in a string */
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
            return haystack;
        }

        haystack++;
    }

    return NULL; // Substring not found
}
