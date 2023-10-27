#include "main.h"
/**
 * _puts - print a string of char stored inside *str
 *@str: char type input
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
