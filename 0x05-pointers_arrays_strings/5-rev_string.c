#include "main.h"
/**
 * rev_string - reverse string
 * @s: char type input
 */
void rev_string(char *s)
{
	int count, i, j;
	char a;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	j = count - 1;

	i = 0;

	while (j >= 0 && i < j)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
		j--;
		i++;
	}
}
