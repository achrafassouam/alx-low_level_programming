#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: char type pointer
 * @accept: char type pointer
 * Return: s if match is found, NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	char *tmp;

	while (*s != '\0')
	{
		tmp = accept;

		while (*tmp != '\0')
		{
			if (*s == *tmp)
			{
				return ((char *) s);
			}
			tmp++;
		}
		s++;
	}
	return (NULL);
}
