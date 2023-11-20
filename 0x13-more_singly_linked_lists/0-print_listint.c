#include "lists.h"

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
	const listint_t *tmp = h;

	i = 0;

	while (tmp)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}	
