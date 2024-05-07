#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: return the index where value is located
 *	or -1 If value is not present in array or if array is NULL
*/

int binary_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t R = size - 1;
	size_t m, i;

	while (L <= R)
	{

		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			printf("%d", array[i]);
			if (i < R)
				printf(", ");
		}
		printf("\n");

		m = (L + R) / 2;
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}

	return (-1);
}
