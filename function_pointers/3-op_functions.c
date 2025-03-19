#include "3-calc.h"

/**
 * op_add - Suma dos enteros.
 * @a: Primer entero.
 * @b: Segundo entero.
 *
 * Return: La suma de a y b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Resta dos enteros.
 * @a: Primer entero.
 * @b: Segundo entero.
 *
 * Return: La diferencia de a y b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplica dos enteros.
 * @a: Primer entero.
 * @b: Segundo entero.
 *
 * Return: El producto de a y b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide dos enteros.
 * @a: Primer entero.
 * @b: Segundo entero.
 *
 * Return: El resultado de la división de a por b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calcula el módulo de dos enteros.
 * @a: Primer entero.
 * @b: Segundo entero.
 *
 * Return: El resto de la división de a por b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
