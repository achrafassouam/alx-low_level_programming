#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of the program
 * @ac: int type variable, count
 * @av: double pointer type character
 *
 * Return: NULL if ac is 0 and av is null
 *	or return a pointer to a new string if fails
 *
 */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* calculate the total length required*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	/* memory allocation */
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* copy arguments to the new string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
