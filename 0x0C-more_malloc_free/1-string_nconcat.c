#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer for string 1
 * @s2: pointer for string 2
 * @n: number of bytes to truncate by
 * Return: the two strinfs concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1, len2, sbuffer, i;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	sbuffer = len1 + len2 + 1;

	p = malloc(sizeof(char) * sbuffer);

	if (p == NULL)
		return (NULL);

	i = 0;

	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}

	if (n >= len2)
	{
		i = 0;

		while (i < len2)
		{
			p[len1 + i] = s2[i];
			i++;
		}
	}
	else
	{
		i = 0;

		while (i < n)
		{
			p[len1 + i] = s2[i];
			i++;
		}
	}
	return (p);
}
