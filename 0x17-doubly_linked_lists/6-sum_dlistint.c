#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a list
 * @head: head of the list
 *
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
