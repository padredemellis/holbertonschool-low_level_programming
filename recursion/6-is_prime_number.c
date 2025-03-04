#include "main.h"
#include <math.h>

/**
 * is_prime_number - Verifica si un número es primo.
 * @n: El número a verificar.
 *
 * Return: 1 si n es primo, 0 si no lo es.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (is_prime_helper(n, 2));
}
/**
 * is_prime_helper - Función auxiliar recursiva.
 * @n: El número a verificar.
 * @i: El posible divisor.
 *
 * Return: 1 si n es primo, 0 si no lo es.
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}
