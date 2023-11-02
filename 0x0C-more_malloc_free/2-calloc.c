#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of memory bytes
 * @size: number of data type bits
 * Return: pointer to initialized buffer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *fil;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	fil = p;

	for (i = 0; i < (nmemb * size); i++)
		fil[i] = '\0';

	return (p);
}
