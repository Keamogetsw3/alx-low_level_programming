#include "main.h"

/**
 * _puts: Used to print a string to stdout
 * @s: The string to be printed
 *
 * Return: No. of characters printed
 */
int _puts(char *s)
{
  int counter = 0;

    while (s[counter] != '\0')
    {
        _putchar(s[counter]);
        counter++;
    }  
  return (counter);
}
