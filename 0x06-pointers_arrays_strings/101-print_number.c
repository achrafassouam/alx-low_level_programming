#include "main.h"
/**
 * print_number - to print numbers stored in n
 * @n: int type input
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 10 && n >= 0)
	{
		_putchar('0' + n);
		return;
	}
	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
	{
		i = n;
	}

	if (i >= 10)
	{
		print_number(i / 10);
	}
	_putchar('0' + (i % 10));

}
