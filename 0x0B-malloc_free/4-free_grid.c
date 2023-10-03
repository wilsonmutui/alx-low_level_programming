#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2d array
 * @height: Height  of grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int w;

	for (w = 0; w < height; w++)
	{
		free(grid[w]);
	}
	free(grid);
}
