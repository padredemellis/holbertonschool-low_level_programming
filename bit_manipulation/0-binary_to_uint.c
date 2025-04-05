#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Convierte una cadena binaria a un número entero sin signo.
 * @b: Puntero a una cadena de caracteres que contiene '0' y '1'.
 *
 * Return: El número convertido o 0 si hay un carácter inválido o b es NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = result * 2 + (b[i] - '0');
	}

	return (result);
}

