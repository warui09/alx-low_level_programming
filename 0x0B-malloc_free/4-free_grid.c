#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free memory allocated for a two dimensional grid
 *
 *@grid: grid to free
 *@height: number of sub-arrays in the array
 *
 *Return: nothing
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
