#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: head of list
 * @index: is the index of the node
 *
 * Return: the nth node of the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int id;

	if (head == NULL)
		return (NULL);

	current = head;
	id = 0;

	while (current != NULL && id < index)
	{
		current = current->next;
		id++;
	}

	return (current);
}
