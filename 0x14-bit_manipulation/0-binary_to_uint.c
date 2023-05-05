#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num_conv;
	int len;

	num_conv = 0;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] < '0' || b[len] > '1')
			return (0);
		num_conv = num_conv * 2 + (b[len] - '0');
	}
	return (num_conv);
}
