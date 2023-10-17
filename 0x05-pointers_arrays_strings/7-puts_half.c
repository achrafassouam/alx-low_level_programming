#include "main.h"
/**
 * puts_half - print half of a string
 * @str: char type input
 */
void puts_half(char *str)
{
	int l, k;

	while (str[l] != '\0')
		l++;

	k = l / 2;

	while (k < l)
	{
	_putchar(str[k]);
	k++;
	}
	_putchar('\n');
}
