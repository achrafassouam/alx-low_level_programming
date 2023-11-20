#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: point to element
 *
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}
		return (i);
}
