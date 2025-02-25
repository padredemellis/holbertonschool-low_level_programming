#include "main.h"
#include <stdio.h>
/**
 *swap_int -swaps the values of two integers.
 * @a: is a pointer.
 *@b:is a poniter
 * Return: two integers
 */
void swap_int(int *a, int *b)
{
	a = &b;
	b = &a;
}
