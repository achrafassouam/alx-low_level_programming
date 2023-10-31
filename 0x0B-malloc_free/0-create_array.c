#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *		& initializes it with a specific char
 * @size: unsigned int type input
 * @c: char type input
 * Return: the array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size > 0)
	{
		str = malloc(sizeof(char) * size);
			if (str == NULL)
			{
				return (NULL);
			}

	}
	else
	{
		return (NULL);
	}
	i = 0;

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
