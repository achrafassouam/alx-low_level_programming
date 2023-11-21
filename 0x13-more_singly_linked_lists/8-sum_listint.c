#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: points to the head of the list
 *
 * Return: the sum of all data in the list, 0 if head is NULL
 */

int sum_listint(listint_t *head)
{
	listint_t *current_node;
	unsigned int sum;

	if (head == NULL)
		return (0);

	current_node = head;

	sum = 0;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
