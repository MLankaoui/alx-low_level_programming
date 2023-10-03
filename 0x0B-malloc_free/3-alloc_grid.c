#include <stdlib.h>

/**
* alloc_grid - Allocate a 2D array of integers and initialize to 0.
* @width: The width (number of columns) of the grid.
* @height: The height (number of rows) of the grid.
*
* Return: A pointer to the newly allocated 2D array, or NULL on failure.
*/
int **alloc_grid(int width, int height)
{

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	int **grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < height; i++)

	{

		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (int j = 0; j < i; j++)

			{

				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}


		for (int j = 0; j < width; j++)

		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
