#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list
 * @h: point to element in listint_t list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}

