#include "hash_tables.h"
/**
  * key_index - a function that gives you the index of a ke
  * @key: the key
  * @size: the size of the table
  * Return: the index of the string
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
