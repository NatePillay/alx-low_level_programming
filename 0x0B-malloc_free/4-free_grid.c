#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * free_grid - freeing the space up occupied by grid
 * @grid: one var
 * @height: second var
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
