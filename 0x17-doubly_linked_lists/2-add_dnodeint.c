#include "lists.h"

/**
 * dlistint_t *add_dnodeint - adds a new node at the beginning
 * @head: head of the list
 * @n: value to add
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = *head;
	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
