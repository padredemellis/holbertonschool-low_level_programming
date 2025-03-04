#include "main.h"
/**
 * _print_rev_recursion - imprime una cadena reves recursivamente
 * @s: es un puntero a una variable string
 * Return: una cadena.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}


