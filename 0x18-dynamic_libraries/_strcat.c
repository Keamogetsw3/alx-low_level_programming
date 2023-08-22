#include "main.h"

/**
  * _strcat - concatenate strimgs
  * @dest: first string to concatenate
  * @src: second string to concatenate
  *
  * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int pos_source;
	int pos_2;

	pos_source = 0;
	pos_2 = 0;
	while (src[pos_2] != '\0')
	{
		pos_2++;
	}
	while (src[pos_source] != '\0')
	{
		dest[pos_source] = src[pos_source];
		pos_2++;
		pos_source++;
	}
	dest[pos_2] = '\0';
	return (dest);
}
