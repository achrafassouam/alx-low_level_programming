#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - add a node at the end
 * @head: char to print
 * @str: string for new node
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n;
	list_t *curr_n;

	unsigned int len = 0;

	while (str[len])
		len++;

	new_n = malloc(sizeof(list_t));

	if (!new_n)
		return (NULL);

	new_n->str = strdup(str);
	new_n->len = len;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (*head);
	}

	curr_n = *head;

	while (curr_n->next != NULL)
	{
		curr_n = curr_n->next;
	}

	curr_n->next = new_n;

	return (new_n);
}

