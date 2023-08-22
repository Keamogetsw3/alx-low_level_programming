#include "main.h"

/**
 * _strnchr - locates the ﬁrst occurrence of char in str
 * @s: string
 * @c: character
 *
 * Return: a pointer to the located character, or a null
 */
char *_strchr(char *s, char c)
{
	while (*s != (char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}
