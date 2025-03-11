#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - Crea una cuadrícula bidimensional de enteros.
 * @width: Ancho de la cuadrícula.
 * @height: Alto de la cuadrícula.
 *
 * Return: Puntero a la cuadrícula creada, o NULL en caso de error.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
