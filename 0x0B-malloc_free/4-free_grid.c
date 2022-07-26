#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free memory created by alloc_grid
 * @grid: size of array
 * @height: rows in array
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		free((int *)grid[i]);
	}
	free(grid);
}
