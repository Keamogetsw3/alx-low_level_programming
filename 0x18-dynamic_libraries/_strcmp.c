#include "main.h"

/**
  * _strcmp - compares values of two string
  * @s1: first string to compare
  * @s2: second string to compare
  *
  * Return: 0 on success
 */
int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0; s1[index] != '\0' && s2[index] != '\0'; index++)
	{
		if (s1[index] != s2[index])
		{
			return ((int)s1[index] - s2[index]);
		}
	}
	return (0);
}
