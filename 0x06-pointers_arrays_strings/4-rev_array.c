#include "main.h"
/**
 *
 *
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
