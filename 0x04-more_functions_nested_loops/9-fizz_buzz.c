#include <stdio.h>

/**
 * main - print numbers from 1 to 100, and change some numbers
 * Return: 0 on success
 *
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
	i++;
	}
	putchar('\n');
	return (0);
}
