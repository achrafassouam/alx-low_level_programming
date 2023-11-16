#include <stdio.h>
#include "lists.h"

/**
  * print_list - prints elements in list_t
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
			h = h->next;
	}

	return (i);
}
