#include "main.h"

/**
* free_grid - free a 2 dimensions array
* @grid:memory array 2d to be freed
* @height:height of the array
* Return: void returns nothing
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
