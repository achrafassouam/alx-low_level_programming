#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: points to head of list
 *
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_list, *current_node;

	if (head == NULL)
		return;

	current_node = *head;

	while (current_node != NULL)
	{
		temp_list = current_node;
		current_node = current_node->next;
		free(temp_list);
	}
	*head = NULL;
}
