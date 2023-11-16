#include <stdio.h>
#include "lists.h"

/**
  * print_list - prints elements
  * @h: singly linked list
  * Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t t;

	for (t = 0; h; t++)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->node_length, h->str);
		}
			h = h->next;
	}

	return (t);
}

