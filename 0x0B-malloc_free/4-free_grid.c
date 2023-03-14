#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2d grid
 * previously created by your alloc_grid function.
 * @grid: the grid in question
 * @height: of the grid
 * Return: the empty grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
