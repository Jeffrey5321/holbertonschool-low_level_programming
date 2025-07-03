# include <stdio.h>
# include "main.h"
# include <stdlib.h>

/**
 * free_grid - free up the memory of a 2d array
 * @grid:target memory to free
 * @height: size of array
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
