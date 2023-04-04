#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked lists
 * @h: pointer to node
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
  size_t num = 0;
  while (h)
    {
      count++;
      h = h->next;
    }
  return num;
}
