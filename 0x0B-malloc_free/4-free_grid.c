#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free 2 dimensional grid
 * @grid: 2nd grid
 * Height: height dimension
 * Description: free memary
 * return: nothing
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
