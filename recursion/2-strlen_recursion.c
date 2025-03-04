#include "main.h"
/**
 * _strlen_recursion - cuenta los caracteres de un string
 * @s: es un puntero a una variable string
 * Return: una cadena.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
