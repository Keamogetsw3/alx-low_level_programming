#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @num: binary representation of a number
 */

void print_binary(unsigned long int num)
{
	if (num > 1)
		print_binary(num >> 1);
	_putchar((num & 1) ? '1' : '0');
}
