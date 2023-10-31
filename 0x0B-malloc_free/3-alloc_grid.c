#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: int type input for the width of the 2 dim array
 * @height: int type input for the height of the 2 dim array
 * Return: NULL on failure, the 2 dim array otherwise
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width < 1)
		return (NULL);

	p = (int **)malloc(sizeof(p) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
			
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;

		}

	}
	return (p);
}
