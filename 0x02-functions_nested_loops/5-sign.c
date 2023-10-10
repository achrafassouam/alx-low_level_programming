#include "main.h"
/**
 * * print_sign - Determines whether an integer is positive, negative or zero.
 * @n: check the number
 * Return: 1 when +, -1 when - and 0 when 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
