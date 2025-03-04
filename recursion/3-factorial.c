#include "main.h"
/**
 * factorial - imprime una cadena recursivamente
 * @n: el numero a calcular
 * Return: el calculo de un factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
		return (n * factorial(n - 1));
}
