#include "main.h"
/**
 * factorial - calculate the factorial of a given number
 * @n: int type input
 * Return: 0 if negative, 1 if n is 1, otherwise factorial.
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
