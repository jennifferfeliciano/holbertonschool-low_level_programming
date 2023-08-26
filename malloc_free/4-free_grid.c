#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid- Frees a 2D grid created by alloc_grid function
 *@grid: pointer to the 2d grid
 *@height: height of the grid
 *Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid != NULL)
	{
		for (; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
