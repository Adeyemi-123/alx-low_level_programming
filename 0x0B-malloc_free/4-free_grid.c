#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a tw0 dimensional grid previously created
 * @grid: pointer of array
 * @height: size of aray
 * Return: return (void)
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
