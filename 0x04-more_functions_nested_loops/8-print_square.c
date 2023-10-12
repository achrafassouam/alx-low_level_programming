#include "main.h"
/**
 * print_square - print table using size int as size
 * @size : int type input
 * Return: nothing.
 */
void print_square(int size)
{
	int line, col;

	if (size > 0)
	{
		line = 1;

		while (line <= size)
		{
			col = 1;

			while (col <= size)
			{
				_putchar('#');
				col++;
			}
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
