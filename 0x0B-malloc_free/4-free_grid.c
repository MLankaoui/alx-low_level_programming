#include "main.h"

/**
 * free_grid - Frees the memory allocated for a 2D grid.
 * @grid: The 2D grid to be freed.
 * @height: The height of the grid.
 *
 * This function iterates through each row of the grid and frees the memory
 * allocated for each row. Then, it frees the memory allocated for the grid
 * itself.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

