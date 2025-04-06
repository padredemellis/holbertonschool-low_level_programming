#include "main.h"
/**
 * set_bit - Establece el valor de un bit a 1 en un índice dado.
 * @n: Puntero al número.
 * @index: Índice del bit que se desea establecer.
 *
 * Return: 1 si tuvo éxito, o -1 si hubo un error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | (1UL << index);
	return (1);
}

