#include <stdio.h>
/**
 * main - prints all possible different
 * combinations of three digits
 * Return: 0 when success
 */
int main(void)
{
	int n = 0;

	while
	(n <= 7)
	{
		int m = n + 1;

		while
		(m <= 8)
		{
			int o = m + 1;

			while
			(o <= 9)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(o + '0');
				if
				(n != 7 || m != 8 || o != 9)
				{
					putchar(',');
					putchar(' ');
				}
				o++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
