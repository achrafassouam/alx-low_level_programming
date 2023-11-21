#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: points to the head of the list
 * @index: index at which to delete the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *sub_node;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	for (i = 0; i < index - 1 && current_node != NULL; i++)
	{
		current_node = current_node->next;
	}

	if (i < index - 1 || current_node == NULL)
		return (-1);

	sub_node = current_node->next;
	current_node->next = sub_node->next;
	free(sub_node);

	return (1);
}
