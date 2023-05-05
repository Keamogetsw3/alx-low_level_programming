#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: bits of the input number
 * @index: index starting from 0 of the bit you want to get
 *
 * Return: value of the bit at index index, -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	bit_val = (n >> index);
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	return (bit_val & 1);
}
