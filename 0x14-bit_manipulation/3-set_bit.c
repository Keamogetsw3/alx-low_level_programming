#include "main.h"

/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@num: pointer
 *@index:the index, starting from 0 of the bit you want to set
 *Return:1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*num |= (1UL << index);
	return (1);
}
