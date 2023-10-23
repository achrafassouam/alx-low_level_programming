#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: int type pointer;
 * @size: int type input;
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;

	while (i < size)
	{
		sum1 += a[i * size + i];
		sum2 += a[(size - 1 - i) * size + i];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
