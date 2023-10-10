#include "main.h"
/**
 * print_alphabet_x10 - orint alphabet 10 times
 * Return: 0 on success
 */
int print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		++i;
		_putchar('\n');
	}
}
