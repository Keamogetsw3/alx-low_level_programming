#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node;
    dlistint_t *next;
    dlistint_t *current_n;
    unsigned int count;

    new_node = malloc(sizeof(dlistint_t));
    current_n = *h;

    if (h == NULL)
        return (NULL);
    if (idx != 0)
    {
        for (count = 0; count < idx - 1 && current_n != NULL; count++)
            current_n = current_n->next;
        if (current_n == NULL)
            return (NULL);
    }
    
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;
    if (idx == 0)
    {
        next = *h;
        *h = new_node;
        new_node->prev = NULL;
    }
    else
    {
        new_node->prev = current_n;
        next = current_n->next;
        current_n->next = new_node;
    }
    new_node->next = next;
    if (new_node->next != NULL)
        new_node->next->prev = new_node;
    return (new_node);
}
