#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: a pointer of type listint_t
 *
 * Return: number of nodes
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t num_0f_nodes = 0;

	while (h)
	{
		num_0f_nodes++;
		h = h->next;
	}

	return (num_0f_nodes);
}
