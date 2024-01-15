#include "main.h"
/**
 * _isupper - check the code.
 * @c: int type input
 * Return: 1 when uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
