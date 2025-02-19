#include <stdio.h>
#include "main.h"
/**
 * _print_sign - Chequear el signo de un número.
 * @n: El número a chequear.
 *
 * Return: 1 si es positivo, 0 si es cero, -1 si es negativo.
 */
int _print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}

	return (0);
}
