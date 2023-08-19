#include "lists.h"

/**
 * add_dnodeint_end - add node
 *
 * Return: New Nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *new_node;
  dlistint_t *current_n;

  new_node = malloc(sizeof(dlistint_t));
  current_n = *head;

  if (head == NULL)
    return (NULL);

  if (new_node == NULL)
    return (NULL);
  new_node->n = n;
  new_node->next = NULL;
  if (*head == NULL)
  {
    new_node->prev = NULL;
    *head = new_node;
    return (new_node);
  }

  while (current_n->next != NULL)
    current_n = current_n->next;
  current_n->next = new_node;
  new_node->prev = current_n;
  return (new_node);
}
