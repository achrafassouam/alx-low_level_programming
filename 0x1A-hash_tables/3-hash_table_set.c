#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table to add or update the element
 * @key: The key, cannot be an empty string
 * @value: The value associated with the key, can be an empty string
 *
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (strlen(key) == 0)
		return (0);

	index = hash(key) % ht->size;

	*node = malloc(sizeof(hash_node_t));

	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];

	ht->array[index] = node;

	return (1);
}
