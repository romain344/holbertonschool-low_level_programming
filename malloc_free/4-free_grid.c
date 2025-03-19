#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid function
 * @grid: the 2D array to be freed
 * @height: the number of rows in the grid
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height <= 0)
		return;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
