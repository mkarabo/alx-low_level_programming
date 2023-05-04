#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * and returns its data.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The data of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;

	tmp = *head;
	*head = (*head)->next;

	free(tmp);

	return (data);
}
