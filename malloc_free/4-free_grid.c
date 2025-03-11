#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - libera la memoria que fue asignada a **grid
 * @grid: es la cuadrícula.
 * @height: Alto de la cuadrícula.
 *
 * Return: memoria liberada.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
