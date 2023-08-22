#include "main.h"

/**
  * _strnlen - calculate the length of string
  * @s: string whose length needs to be calculated
  *
  * Return: int length of the string
 */
int _strnlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
