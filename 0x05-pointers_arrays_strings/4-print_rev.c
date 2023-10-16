#include "main.h"
/**
 * print_rev - prints a string backwards
 * @s: char type input
 */
void print_rev(char *s)
{
	int count;

	while (s[count] != '\0')
	{
		count++;
	}
	count--;
	while (s[count] != '\0')
	{
		_putchar(s[count--]);
	}
	_putchar('\n');
}
