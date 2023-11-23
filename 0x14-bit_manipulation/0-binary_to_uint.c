#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointing to a string of 0 and 1 chars
  *
  * Return: converted number, 0 if b is null or not 0 and 1
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	decimal = 0;
	i = 0;

	while (b[i])
	{
		if (b[i] < 48 || b[i] > 49)
		{
			return (0);
		}

		decimal *= 2;
		decimal += b[i] - 48;

		i++;
	}
	return (decimal);
}
