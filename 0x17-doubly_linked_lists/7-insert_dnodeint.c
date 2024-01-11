#include "lists.h"
/**
  * insert_dnodeint_at_index - inset a new node at an index
  * @h: head of the list
  * @idx: where to insert the node
  * @n: value of the new node
  *
  * Return: new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*h == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	current = *h;

	for (i = 0; i < idx - 1 && current->next != NULL; i++)
		current = current->next;

	if (current->next == NULL && idx > 1)
		return (NULL);

	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
