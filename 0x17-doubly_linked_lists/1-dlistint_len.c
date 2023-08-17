#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
  size_t count;

  count = 0;
  while (h != NULL)
    {
      ++count;
      h = h->next;
    }
  return count;
}
