#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: point to elements of the list
 *
 * Return: node count, or 0 if h is null
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
