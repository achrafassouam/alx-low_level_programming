#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: char type pointer
 * Return: res
 */

int _atoi(char *s)
{
	int i, j, k, res;

	i = res = j = 0;
	k = -1;
	for (k = -1; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			k = k * -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10;
			res = res - (s[i] - '0');
			j = 1;
		}
		else if (j == 1)
			break;
	}
	res *= k;
	return (res);
}
