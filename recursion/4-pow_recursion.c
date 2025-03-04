#include "main.h"
/**
 * _pow_recursion - potencia recursiva
 * @x: es la base
 * @y: es el exponente
 * Return: la potencia.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
