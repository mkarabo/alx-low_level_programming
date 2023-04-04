#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: a pointer of type listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
