#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of columns in the grid
 * @height: number of rows in the grid
 *
 * Return: pointer to the 2D array if successful, or NULL if memory allocation
 *         or if width or height is less than or equal to 0.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for  (a = 0; a < height; a++)
	{
		grid[a] = (int *)malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{

			for (b = 0; b < a; b++)
				free(grid[b]);
			free(grid);
			return (NULL);
		}

		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}

	return (grid);
}
