#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to position given.
 * @head: A pointer to a pointer to the last node of the list.
 * @idx: index of list where the new node must be added (starting from 0).
 * @n: value to be assigned to the new node.
 *
 * Return: If the function fails - NULL.
 * else - a pointer to the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current_node = *head;

	if (idx == 0)
		return (add_nodeint(head, n));

	for (i = 0; current_node != NULL && i < idx - 1; i++)
		current_node = current_node->next;

	if (current_node == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = current_node->next;

	current_node->next = new_node;

	return (new_node);
}
