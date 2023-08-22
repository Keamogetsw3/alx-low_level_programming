#include "main.h"

/**
 * _isdigit: checks of the character is a digit
 * @c: string to be checked
 *
 * Return: 1 on success, otherwise 0
 */
int _isdigit(int c)
{
  unsigned int i;

    for (i = 0; c[i]; i++)
    {
        if (c[i] < '0' || c[i] > '9')
            return (0);
    }  
  return (1);
}
