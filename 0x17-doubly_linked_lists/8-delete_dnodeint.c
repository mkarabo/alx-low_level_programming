#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at the specified index of a
 * dlistint_t linked list.
 * @head: A double pointer to the head of the list.
 * @index: The index of the node to be deleted.
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    dlistint_t *previous = NULL;
    unsigned int i = 0;

    if (!head || !*head)
        return (-1);

    while (current)
    {
        if (i == index)
        {
            if (previous)
                previous->next = current->next;
            else
                *head = current->next;

            if (current->next)
                current->next->prev = previous;

            free(current);
            return (1);
        }

        previous = current;
        current = current->next;
        i++;
    }

    return (-1);
}
