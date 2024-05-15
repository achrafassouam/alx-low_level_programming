#include <stdio.h>
/**
 * wildcmp - function that compares two strings
 * @s1: string to compare to
 * @s2: string with wild character
 *
 * Return: 1 on success, -1 on error
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');

	if (*s2 == '*')
	{
		s2++;
		while (*s1)
		{
			if (wildcmp(s1, s2))
				return (1);
			s1++;
		}
		return (wildcmp(s1, s2));
	}

	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
