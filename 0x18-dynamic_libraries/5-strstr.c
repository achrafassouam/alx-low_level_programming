#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: char type pointer
 * @needle: char type pinter
 * Return: haystack if found match, NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (!needle[j])
			return (&haystack[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
