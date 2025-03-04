#include "main.h"
/**
 * _puts_recursion - imprime una cadena recursivamente
 * @s: es un puntero a una variable string
 * Return: una cadena.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
