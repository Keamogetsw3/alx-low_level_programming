#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 on little endian,  return 0 on big endian
 */
int get_endianness(void)
{
	int num;
	char *endian;

	num = 1;
	endian = (char *)&num;
	return (*endian == 1);
}
