#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end
 * @head: head of the list
 * @n: new node to add
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	tmp->prev = *head;
	return (tmp);
}
