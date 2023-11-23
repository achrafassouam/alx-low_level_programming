#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number to convert
 *
 * Return: the binary number, or 0 if n is NULL
 */

void print_binary(unsigned long int n)
{
	int i, lzero;

	if (n == 0)
	{
		_putchar(48);
	}

	for (lzero = 0, i = (8 * 8) - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			lzero = 1;
		}

		if (lzero == 1)
		{
			if ((n >> i) & 1)
			{
				_putchar('1');
			}
			else
			{
				_putchar('0');
			}
		}
	}
}
