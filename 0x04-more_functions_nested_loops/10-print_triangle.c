#include "main.h"
/**
 * print_triangle - prints a triangle followed by a new line.
 * @size: int type input
 */
void print_triangle(int size)
{
	int lane, col = 0;
	int space;

	if (size > 0)
	{
		while (col < size)
		{
			space = size - col - 1;
			while (lane < size)
			{
				if (space > lane)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				lane++;
			}
			col++;
			lane = 0;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
