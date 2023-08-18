#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) 
{
    dlistint_t *current_n;
    unsigned int counter;

    current_n = head;
    counter = 0;

    while (current_n != NULL)
    {
        if (counter == index)
        {
            return (current_n);
        }
        current_n = current_n->next;
        counter++;
    }

    return NULL;
}
