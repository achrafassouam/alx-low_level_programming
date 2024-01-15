#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: char type pointer
 * @accept: char type pointer
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		if (s[i] != ' ')
		{
			int j = 0;

			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
				{
					count++;
					break;
				}
				j++;
			}

		}
		else
		{
			break;
		}
		i++;
	}
	return (count);
}
