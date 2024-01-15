#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: char type pointer
 * @b: char type input
 * @n: int type input
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int u = 0;

	while (u < n)
	{
		s[u] = b;
		u++;
	}
	return (s);
}
