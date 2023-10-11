#include "main.h"
/**
 * times_table - prints the 9 times table
 * starting with 0
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int line, col, multiplier;

	line = 0;

	while (line < 10)
	{
		col = 0;

		while (col < 10)
		{
			multiplier = col * line;
			if (col == 0)
			{
				_putchar(multiplier + '0');
			}
			if (multiplier < 10 && col != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multiplier + '0');
			}
			else if (multiplier >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((multiplier / 10) + '0');
				_putchar((multiplier % 10) + '0');
			}
		col++;
		}
	_putchar('\n');
	line++;
	}
}
