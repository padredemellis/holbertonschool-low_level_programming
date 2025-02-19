#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Mostrar el ultimo numero.
 * @n: El número a chequear.
 *
 * Return: abs(n) %10.
 */
int print_last_digit(int n)
{
	int last_digit = abs(n % 10);

	printf("%d", last_digit);

	return last_digit;
}
