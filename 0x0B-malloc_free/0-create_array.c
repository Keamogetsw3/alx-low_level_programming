#include <stdlib.h>
#include "main.h"

/**
 **create_array - creates an array of chars
 *@size:size of the array to create
 *@c:char to initialize the array c
 *
 *Return: pointer to the array(Success), Null (Error)
 */

char *create_array(unsigned int size, char c)
{
  /**
   *This pointer will
   *will hold the base
   *address of the block created
   */ 
  char *ptr;
  unsigned int i = 0;

  if (size == 0)
		return (NULL);

  //Dynamically allocate memory using malloc()
  ptr = (char *) malloc(sizeof(char) * size);

  /**
   *check if memory allocation has been successfully
   *allocated by malloc or not
   */
  if (ptr == NULL)
    return (0);

  while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
