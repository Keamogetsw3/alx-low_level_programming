#include "main.h"

/**
	* _memset: fill a block of memory with a specified value
	* @s:
	* @b:
 *@n: 
	*
	* Return:
*/
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;

    while (n > 0)
    {
        *ptr = b;
        ptr++;
        n--;
    }

    return (s);
}
