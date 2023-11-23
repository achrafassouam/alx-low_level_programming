#include "main.h"

/**
 * flip_bits - number of bits you  need to flip
 * @n: long int base number
 * @m: long int destination number
 *
 * Return: the number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned long int res;

	i = 0;
	res = n ^ m;

	while (res != 0)
	{
		i = i + (res & 1);
		res >>= 1;
	}
	return (i);
}
