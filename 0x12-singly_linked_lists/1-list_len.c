#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * list_len - number of nodes in list
  * @h: linked list
  * Return: nbr of elements in a linked list
  */
size_t list_len(const list_t *h)
{
	int t;

	for (t = 0; h; t++)
		h = h->next;
	return (t);
}

