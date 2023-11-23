#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: long int type input
 * @index: the index
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > ((8 * 8) - 1))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
