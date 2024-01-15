#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest : char type pointer
 * @src: char type pointer
 * @n: int type input
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
