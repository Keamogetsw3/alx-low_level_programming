#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 1 on little endian,  return 0 on big endian
 */
int get_endianness(void) {
    int num;
    num = 1;
    char *p = (char*)&num;
    return (*p == 1);
}
