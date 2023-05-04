#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node of a listint_t list
 * at a certain index.
 * @head: A pointer to the first node of the list.
 * @index: The index of the node to return (starting from 0).
 *
 * Return: If the node does not exist - NULL, else
 *  a pointer to the n-th node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node = head;

	for (i = 0; current_node != NULL && i < index; i++)
		current_node = current_node->next;

	if (current_node == NULL)
		return (NULL);

	return (current_node);
}
