#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Chequear si es letra es minuscula.
 * @c: El carácter a chequear.
 *
 * Return: 1 si es una letra minúscula, 0 en caso contrario.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
