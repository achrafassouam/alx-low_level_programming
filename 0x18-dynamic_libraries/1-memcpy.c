#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: char type pointer
 * @src: char type pointer
 * @n: int type input
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
