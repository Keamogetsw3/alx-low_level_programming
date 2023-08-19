#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node
 * @head: head of list
 * index: index
 *
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
  dlistint_t *current_n;
  unsigned int count;

  current_n = *head;

  if (head == NULL || *head == NULL)
    return (-1);

  if (index == 0) {
    *head = current_n->next;

    if (current_n->next != NULL) {
      current_n->next->prev = NULL;
    }

    free(current_n);
    return (1);
  }

  for (count = 0; count < index; count++) {
    if (current_n->next == NULL)
      return (-1);

    current_n = current_n->next;
  }

  current_n->prev->next = current_n->next;

  if (current_n->next != NULL)
    current_n->next->prev = current_n->prev;

  free(current_n);
  return (1);
}
