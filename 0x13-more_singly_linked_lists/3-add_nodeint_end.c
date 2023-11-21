#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: points to the head of the list
 * @n: new value to add in the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current_node, *new_node;

	current_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	while (current_node)
	{
		if (!current_node->next)
			break;

		current_node = current_node->next;
	}

	new_node->n = n;
	new_node->next = NULL;

	if (current_node != NULL)
		current_node->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
