#include "list.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: points to the header of listint_t list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes;

	num_nodes = 0;
	while (h != NULL)
	{
	    h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
