#include "main.h"
/**
 * swap_int - swap value of two int
 * @a: int type input
 * @b: int type input
 */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;

	*b = i;
}
