#include "main.h"
/**
 * get_bit - Devuelve el valor de un bit en una posición específica.
 * @n: Número del que se quiere obtener el bit.
 * @index: Índice del bit empezando desde 0.
 *
 * Return: Valor del bit (0 o 1), o -1 si ocurre un error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}

