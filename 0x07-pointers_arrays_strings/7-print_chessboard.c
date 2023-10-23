#include "main.h"
/**
 * print_chessboard - print a chess board
 * @a: char type array pointer
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;

	while (i < 8)
	{
		j = 0;

		while (j < 8)
		{
			if (j == 7)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
			{
				_putchar(a[i][j]);
			}
			j++;
		}

		i++;
	}
}
