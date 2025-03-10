#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - Crea un array de chars y lo inicializa con un char dado.
* @size: Tamaño del array.
* @c: Carácter de inicialización.
*
* Return: Puntero al array, o NULL si size es 0 o falla la asignación.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
