#include "main.h"
/**
 * rot13 - convert text to rot13
 * @s: char type pointer
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char x;

	i = 0;

	while (s[i] != '\0')
	{
		x = 0;
		j = 0;

		while (in[j] != '\0' && x == 0)
		{
			if (s[i] == in[j])
			{
				s[i] = out[j];
				x = 1;
			}
			j++;
		}
		i++;
	}
	return (s);


}
