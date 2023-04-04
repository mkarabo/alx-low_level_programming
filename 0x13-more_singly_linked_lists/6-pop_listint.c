#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: adress to the head of the listint_t list
 *
 * Return: if linked list is NULL - 0,
 * 0r the node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int number;

	if (*head == NULL)
		return (0);

	tmp = *head;
	number = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (number);
}

