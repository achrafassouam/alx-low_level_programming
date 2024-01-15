#include "main.h"

/**
 * _isdigit - check the code if the input is a digit
 * @c: int type input
 * Return: 1 when success, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
