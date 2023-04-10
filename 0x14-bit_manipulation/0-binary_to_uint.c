#include <stdio.h>
#Include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
   if (b == Null)
    return 0;
    
   unsigned int dec_value = 0, base = 0;
   int len = ;
   
   for(int n = len -1; n >= 0; n--){
        if (b[n] == '1')
            dec_value += base;
        base = base * 2;
   }
   return dec_value;
}
}
