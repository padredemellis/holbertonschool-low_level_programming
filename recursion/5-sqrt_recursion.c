#include "main.h"

/**
 * _sqrt_recursion - Calcula la raíz cuadrada natural de un número.
 * @n: El número para el cual calcular la raíz cuadrada.
 * Return: La raíz cuadrada natural de n;
 *_sqrt_helper - Función auxiliar recursiva para calcular la raíz cuadrada.
 * @n: El número para el cual calcular la raíz cuadrada.
 * @x: El posible candidato para la raíz cuadrada.
 */
int _sqrt_helper(int n, int x);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}

int _sqrt_helper(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, x + 1));
}
