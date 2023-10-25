#include "main.h"
/**
 * checker - check if the number is a prime number
 * @n: int type input
 * @x: int type input
 * Return: Prime number
 */
int checker(int n, int x);

int checker(int n, int x)
{
	if (x >= n && n > 1)
		return (1);
	if (n % x == 0 || n <= 1)
		return (0);
	else
		return (checker(n, x + 1));
}
/**
 * is_prime_number - use checker to find the prime number
 * @n: int type input
 * Return: Prime Number
 */
int is_prime_number(int n)
{
	return (checker(n, 2));
}
