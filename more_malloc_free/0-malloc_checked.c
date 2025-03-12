#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Asigna memoria usando malloc.
 * @b: El tamaño de memoria a asignar.
 *
 * Return: Un puntero a la memoria asignada.
 * Si malloc falla, la función termina el proceso con estado 98.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
