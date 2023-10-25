#include "main.h"
/**
 * checker - checks if the int have a natural square root and calculate it
 * @n: int type input
 * @x: int type input
 * Return: natural square root of an int, -1 otherwise.
 */
int checker(int n, int x);

int checker(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (checker(n, x + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int type iput
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (checker(n, 1));
}
