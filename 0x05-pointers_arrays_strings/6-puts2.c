#include "main.h"
/**
 * puts2 - prints every other character of a string.
 * @str: char type input
 */
void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c = c + 2;
	}
	_putchar('\n');
}
