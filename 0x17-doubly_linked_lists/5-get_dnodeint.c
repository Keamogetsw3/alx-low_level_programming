#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_n;
	unsigned int count;

	current_n = head;
	count = 0;
	while (current_n != NULL)
	{
		if (count == index)
			return (current_n);
		current_n = current_n->next;
		count++;
	}
	return (NULL);
}
