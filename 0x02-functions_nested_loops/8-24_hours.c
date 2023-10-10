#include "main.h"
/**
 * jack_bauer - 24 hours
 * print every minute, from 00:00 to 23:59
 * Return: return 0 when correct
 */
void jack_bauer(void)
{
	int h, m;

	h = 0;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
			m++;
		}
		h++;
	}
}
