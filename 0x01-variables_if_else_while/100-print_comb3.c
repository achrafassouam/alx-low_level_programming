#include <stdio.h>
/**
 * main - prints all possible different,
 * combinations of two digits
 * Return: 0 when success
 */
int main(void)
{
	int n = 0;

	while
	(n <= 8)
	{
		int m = n + 1;

		while
		(m <= 9)
		{
			putchar(n + '0');
			putchar(m + '0');
			if (n != 8 || m != 9)
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
