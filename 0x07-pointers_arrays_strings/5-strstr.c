#include <stdlib.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: char type pointer
 * @needle: char type pinter
 * Return: haystack if found match, NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *c = haystack;
			char *d = needle;

			while (*d != '\0' && *c == *d)
			{
				c++;
				d++;
			}
			if (*d == '\0')
			{
				return ((char *) haystack);
			}

		}
		haystack++;
	}
	return (NULL);
}
