#include <stdio.h>
#include "main.h"
/**
 * _abs  - Mostrar el numero absoluto
 * @n: El número a chequear.
 *
 * Return: numero absoluto.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
