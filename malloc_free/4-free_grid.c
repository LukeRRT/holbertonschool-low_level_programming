#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free 2D grid
 * @grid: the array
 * @height: rows
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
