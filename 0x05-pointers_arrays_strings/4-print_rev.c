#include "main.h"
/**
 * print_rev - prints a string backwards
 * @s: char type input
 */
void print_rev(char *s)
{
	int i, len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
