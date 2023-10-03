#include "main.h"

/**
* free_grid - Free the memory of a 2D grid.
* @grid: Pointer to the 2D grid to be freed.
* @height: Height (number of rows) of the grid.
*/
void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		return;
	}

	for (int i = 0; i < height; i++)
	{

		free(grid[i]);
	}

	free(grid);
}
