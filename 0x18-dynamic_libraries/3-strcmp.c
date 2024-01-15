#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: char type pointer
 * @s2: char type pointer
 * Return: S1 - S2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}
