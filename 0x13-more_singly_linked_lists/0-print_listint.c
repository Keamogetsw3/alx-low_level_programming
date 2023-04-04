#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)/* Print all the elements in the linked list */
{
  size_t num = 0; 

  while (h)
    {
      printf("%d\n", h->n);
      num++;
      h = h->next;
    }
  return num;
}