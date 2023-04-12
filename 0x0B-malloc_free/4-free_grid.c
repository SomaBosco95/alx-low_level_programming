#include "main.h"

/**
 * free_grid - function that frees 2 dimensional grid
 * @grid: pointer to grid to be freed
 * @height: height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
