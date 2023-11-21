#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: head of the list
 *
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *node0;
	listint_t *next_node;

	node0 = head;

	while (node0 != NULL)
	{
		next_node = node0->next;
		free(node0);
		node0 = next_node;
	}
}
