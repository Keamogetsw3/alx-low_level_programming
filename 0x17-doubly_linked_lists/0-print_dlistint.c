#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h:points to the head of the lis
 *
 * Return: the number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h) {
  size_t count;

  count = 0;
  while (h) {
    ++count;
    printf("%d\n", h->n);
    h = h->next;
  }
  return (count);
}
