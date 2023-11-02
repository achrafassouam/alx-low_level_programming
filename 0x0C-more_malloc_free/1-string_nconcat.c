#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n < len2)
		len2 = n;

	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (len1 + len2); i++)
	{
		if (i < len1)
			p[i] = s1[i];
		else
			p[i] = s2[i - len1];
	}
	p[i] = '\0';

	return (p);
}
