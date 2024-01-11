#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: head of the list
 *
 * Return: No return.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
