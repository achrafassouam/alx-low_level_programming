#include "main.h"
/**
 * _puts_recursion - using the puts function in recursions
 * @s: char type pointer
 * Return: print the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
