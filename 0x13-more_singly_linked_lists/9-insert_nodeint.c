#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given (idx) position
 * @head: pointer to the head of the linked list
 * @idx: index at which to insert the new node
 * @n: data to store in the new node.
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node, *new_node;

	if (head == NULL)
		return (0);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;

	while (idx != 1)
	{
		current_node = current_node->next;
		--idx;
		if (current_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
