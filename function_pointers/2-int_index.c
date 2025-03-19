#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Busca un entero en un array usando una función de comparación.
 * @array: Puntero al array de enteros.
 * @size: Número de elementos en el array.
 * @cmp: Puntero a la función de comparación.
 *
 * Return: El índice del primer elemento para el cual cmp no devuelve 0.
 * -1 si ningún elemento coincide o si size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return(-1);
}
