#include "main.h"

/**
	* _strncat: concatenate (append) the first n characters of src to dest
	* @dest:
	* @src:
 *@n:
	*
	* Return:
**/
char *_strncat(char *dest, char *src, int n) 
{
    char *dest_start = dest;

    while (*dest != '\0') 
    {
        dest++;
    }

    while (*src != '\0' && n > 0) 
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';

    return (dest_start);
}
