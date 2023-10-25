#include "main.h"
/**
 * _pow_recursion - raise x to the power oyf
 * @x: int type input
 * @y: int type input
 * Return: -1 if negative, 1 if equales to 0 and power otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
