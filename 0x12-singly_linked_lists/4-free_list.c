#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * free_list - freeing a linked list
  * @head: head of the list
  */
void free_list(list_t *head)
{
	if (!head)
	{
		return;
	}
		free_list(head->next);
		free(head->str);
		free(head);
}

