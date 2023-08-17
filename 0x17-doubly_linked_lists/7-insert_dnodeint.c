#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A double pointer to the head of the list.
 * @idx: The index at which the new node should be inserted.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node;
    dlistint_t *current = *h;
    unsigned int i = 0;

    if (!h)
        return (NULL);

    if (idx == 0)
        return (add_dnodeint(h, n));

    while (current && i < idx - 1)
    {
        current = current->next;
        i++;
    }

    if (!current)
        return (NULL);

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = current->next;
    new_node->prev = current;

    if (current->next)
        current->next->prev = new_node;

    current->next = new_node;

    return (new_node);
}
