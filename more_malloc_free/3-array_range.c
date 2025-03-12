#include <stdlib.h>

/**
 * array_range - Crea un array de enteros que contiene todos los valores desde min hasta max.
 * @min: El valor mínimo (incluido).
 * @max: El valor máximo (incluido).
 *
 * Return: Un puntero al array creado, o NULL si min > max o si falla la asignación.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
