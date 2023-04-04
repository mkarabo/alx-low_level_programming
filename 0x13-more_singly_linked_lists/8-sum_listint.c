#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data(n) in a listint_t list
 * @head: first node in Listint_t list
 *
 * Return: sum of all data or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

