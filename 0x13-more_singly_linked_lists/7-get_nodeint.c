#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: points to the head of the list
 * @index: index of the nodes
 *
 * Return: value of the index node, NULL if fail
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int count;

	current_node = head;

	count = 0;

	while (current_node != NULL)
	{
		if (count == index)
			return (current_node);
		count++;
		current_node = current_node->next;
	}
	return (NULL);
}
