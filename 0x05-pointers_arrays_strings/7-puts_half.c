#include "main.h"
/**
 * put_half - print half of string
 * @str: char type input
 */
void puts_half(char *str)
{
	int i, j;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;

	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
