#include "main.h"
/**
 * clear_bit - Establece el valor de un bit a 0 en un índice dado.
 * @n: Puntero al número.
 * @index: Índice del bit que se desea limpiar.
 *
 * Return: 1 si tuvo éxito, o -1 si hubo un error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(1UL << index);
	return (1);
}
