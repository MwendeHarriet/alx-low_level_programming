#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *free_grid -will free 2D array
 *@grid: 2D grid
 * @height: height of grid
 * description :frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
