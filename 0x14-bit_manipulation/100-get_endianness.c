#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 if little endian, 0 if big endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
