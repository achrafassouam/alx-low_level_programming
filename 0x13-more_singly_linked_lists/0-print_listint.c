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
	int i;
	const listint_t *tmp = h;

	i = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
