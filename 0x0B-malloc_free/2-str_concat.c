#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: char type pointer for frist string
 * @s2: char type pointer for second string
 * Return: Null if failure, the two strings concatenated otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, size;
	char *s;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	size = len1 + len2 + 1;

	s = malloc(sizeof(char) * size);

	if (s == 0)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		s[len1 + i] = s2[i];
	}

	s[size - 1] = '\0';

	return (s);
}
