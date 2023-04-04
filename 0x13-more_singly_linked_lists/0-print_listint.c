#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a linked list
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_0f_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_0f_nodes++;
		h = h->next;
	}

	return (num_0f_nodes);
}
