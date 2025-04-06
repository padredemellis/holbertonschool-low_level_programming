#include "main.h"

/**
 * print_binary - Imprime la representación binaria de un número.
 * @n: Número a imprimir en binario.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

