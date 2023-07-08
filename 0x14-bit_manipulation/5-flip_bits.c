#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * @n: bitnum_1
 * @m: bitnum_2
 *
 * Return:  number of bits you would need to flip to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitxor;
	unsigned long int no_flips;

	bitxor = n ^ m;
	no_flips = 0;

	while (bitxor != 0)
	{
		no_flips += bitxor & 1;
	}

	return (no_flips);
}
