#include "lists.h"

/**
 * get_nodeint_at_index - locates the node at a certain index in a linked list
 * @head: first node in listint_t
 * @index: index of the node to locate indices starting from 0
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

