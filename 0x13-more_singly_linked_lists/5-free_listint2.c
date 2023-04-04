#include "lists.h"

/**
 * free_listint2 - frees the listint_t
 * @head: pointer of the beginning of the
 * listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}

