#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @c: char type pointer
 * Return: c
 */
char *cap_string(char *c)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 1;

	while (c[i] != '\0')
	{
		j = 0;

		while (c[j] == sep[j])
		{
			if (c[i - 1] == sep[j] && (c[i] >= 'a' && c[i] <= 'z'))
			{
				c[i] -= 'a' - 'A';
			}
			j++;
		}
		i++;
	}
	return (c);
}
