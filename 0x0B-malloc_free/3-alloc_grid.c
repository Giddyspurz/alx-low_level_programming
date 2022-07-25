#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a grid of given proportions
 * @width: columns of grid
 * @height: rows of grid
 *
 * Return: initialized array
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
		for (l = 0; l < width; l++)
			grid[k][l] = 0;

	return (grid);
}
