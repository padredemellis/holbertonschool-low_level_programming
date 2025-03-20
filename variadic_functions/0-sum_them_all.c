#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Suma todos sus parámetros.
 * @n: Número de parámetros.
 * @...: Parámetros variables.
 *
 * Return: La suma de todos los parámetros, o 0 si n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
