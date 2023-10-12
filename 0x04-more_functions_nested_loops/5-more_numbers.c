#include "main.h"

/**
 * more_numbers - print from 0 to 14 , 14 times.
 * Return: nothing.
 */
void more_numbers(void)
{
	int i = 0;
	
	while (i < 10)
	{
		int c = 0;

		while (c <=14)
		{
			if (c >=10)
				_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
		c++;
		}
	_putchar('\n');
	i++;
	}
}
