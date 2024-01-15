#include "main.h"
/**
 * _puts - print a string of char stored inside *str
 *@s: char type input
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
