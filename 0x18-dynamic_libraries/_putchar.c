#include "main.h"

/**
 * _putchar: Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1 
 */
int _putchar(chat c)
{
    return (write(1, &c, 1));
}
