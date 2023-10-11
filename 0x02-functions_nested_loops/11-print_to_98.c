#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: int type input
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int c;

	if (n > 98)
	{
		c = n;
		while (c > 98)
		{
		printf("%d, ", c);
		c--;
		}
	}
	else
	{
		c = n;
		while (c < 98)
		{
		printf("%d, ", c);
		c++;
		}
	}
	printf("98\n");
}
