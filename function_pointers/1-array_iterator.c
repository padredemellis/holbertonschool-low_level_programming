#include<stdio.h>
#include"function_pointers.h"

/**
*array_iterator-Ejecuta funcion en cada elemento de array.
*@array:Puntero al array de enteros.
*@size:Tamaño del array.
*@action:Puntero a la función a aplicar.
*Return:Void.
*/
void array_iterator(int *array, size_t size, void(*action) (int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
