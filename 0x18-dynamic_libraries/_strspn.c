#include "main.h"

/**
 * _strspn - computes the length of the maximum initial segment of the string
 * @str1: strint to compute the lengh
 * @accept: string delimit
 *
 * Return: length of the initial segment
 */
unsigned _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && _strchr(accept, *s++))
		count++;
	return (count);
}
