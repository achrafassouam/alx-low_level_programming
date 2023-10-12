#include "main.h"

/**
 * print_numbers - check the code
 * Return: 0 when success.
 */
void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
