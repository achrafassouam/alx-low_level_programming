#include "main.h"
/**
 * reverse_array - reverse a string
 * @a: int type pointer
 * @n: int type input
 */
void reverse_array(int *a, int n)
{
	int tmp[50], i = 0;

	while (i < n)
	{
		tmp[n - i - 1] = a[i];
		i++;
	}
	i = 0;

	while (i < n)
	{
		a[i] = tmp[i];
		i++;
	}
}
