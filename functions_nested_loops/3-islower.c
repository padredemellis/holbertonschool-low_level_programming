#include <stdio.h>
#include "main.h"
/**
 * _islower - Chequear si la letra es minuscula.
 * @c: El carácter a chequear.
 *
 * Return: 1 si es una letra minúscula, 0 en caso contrario.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
