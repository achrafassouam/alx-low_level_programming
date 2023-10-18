#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: char type pointer
 * @src: char type pointer
 * @n: int type input
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
