#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: points to the head of the list
 *
 * Return: head of the list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int temp_head;

	if (*head == NULL)
		return (0);

	temp = *head;

	*head = (*head)->next;
	temp_head = temp->n;

	free(temp);

	return (temp_head);
}
