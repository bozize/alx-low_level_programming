#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * free_grid - a function that free a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: pointer
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL)
		free(grid);

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
