#include "main.h"

/**
 * _isdigit: checks of the character is a digit
 * @c: string to be checked
 *
 * Return: 1 on success, otherwise 0
 */
int _isdigit(int c)
{
  if (c >= '0' && c <= '9')
            return (1);
  else
    {
      return (0);
    }
}
