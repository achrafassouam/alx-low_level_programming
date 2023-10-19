#include "main.h"
/**
 * leet - replace a string of char
 * @s: char type pointer
 * Return: S
 */
char *leet(char *s)
{
	int i, j;
	char al[100] = "aAeEoOtTlL";
	char nu[100] = "43071";

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (al[j] != '\0')
		{
			if (s[i] == al[j])
			{
				s[i] = nu[j / 2];
			}
			j++;
		}
		i++;
	}
	return (s);
}
