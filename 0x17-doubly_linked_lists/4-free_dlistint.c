#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head) {
  dlistint_t *current_n;

  while (head) {
    current_n = head;
    head = head->next;
    free(current_n);
  }
}
