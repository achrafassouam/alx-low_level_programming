#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: char type pointer
 * @c: char type input
 * Return: s if true, NULL if otherwise
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (NULL);
}
