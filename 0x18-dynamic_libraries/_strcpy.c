#include "main.h"

/**
 * _strcpy: copies certain number of char from src into dest
 * @dest: pointing to destination of the copy
 * @src: pointing to source of the copy
 *
 * Return: char pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		++i;
	}
	*(dest + i) = *(src + i);

	return (dest);
}
