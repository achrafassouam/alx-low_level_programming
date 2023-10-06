#include <stdio.h>
/**
 * main - print numbers from 0 to 1
 * and adding coma and space between them
 * Return: 0 when success
 */
int main(void)
{
	int n = 0;

	while
	(n <= 9)
	{
		putchar(n + '0');
		if
		(n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
