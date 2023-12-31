#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a function
 * @array: int type pointer for the input array
 * @size: size_t type input for the size of the array
 * @action: void type pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
