#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index
 * @num: pointer
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*num &= ~(1UL << index);
	return (1);
}
