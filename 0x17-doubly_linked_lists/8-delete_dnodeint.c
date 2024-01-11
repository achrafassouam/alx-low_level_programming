#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a list
 * @head: head of the list
 * @index: index of the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_to_delete, *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		node_to_delete = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(node_to_delete);
		return (1);
	}

	current = *head;
	for (i = 0; i < index - 1 && current->next != NULL; i++)
		current = current->next;
	if (current->next == NULL)
		return (-1);

	node_to_delete = current->next;
	current->next = node_to_delete->next;
	if (node_to_delete->next != NULL)
		node_to_delete->next->prev = current;
	free(node_to_delete);
	return (1);
}
