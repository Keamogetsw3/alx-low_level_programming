#include "main.h"

/**
 * _strcpy: copies certain number of char from src into dest
 * @dest: pointing to destination of the copy
 * @src: pointing to source of the copy
 *
 * Return: char pointer to dest
 */
char *_strcpy(har *dest, char *src)
{
    int i = 0;

	while (*(source_str + i) != '\0')
	{
		*(dest_str + i) = *(source_str + i);
		++i;
	}
	*(dest_str + i) = *(source_str + i);

	return (dest_str);
}
