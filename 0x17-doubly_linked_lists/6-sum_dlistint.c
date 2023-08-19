#include "lists.h"

/**
 * sum_dlistint- check the code
 *
 * Return: Sum
 */
int sum_dlistint(dlistint_t *head)
{
  int sum = 0;

  while (head != NULL)
  {
    sum += head->n;
    head = head->next;
  }
  return (sum);
}
