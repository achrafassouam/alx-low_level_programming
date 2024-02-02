#include "hash_tables.h"

/**
 * hash_table_delete - delete table
 * @ht: table
 *
 *
 */

void hash_table_delete(hash_table_t *ht)
{

	unsigned long i;
	hash_node_t *current;
	hash_node_t *next;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		*current = ht->array[i];
		while (current != NULL)
		{
			*next = current->next;
			free(current->key);
			free(current->value);
			current = next;
		}
	}

	free(ht->array);
	ht->array = NULL;

	free(ht);
	ht = NULL;

}

