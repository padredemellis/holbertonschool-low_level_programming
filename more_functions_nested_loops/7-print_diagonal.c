#include <stdio.h>
#include "main.h"
/**
 *print_diagonal - Multiplies two integers.
 * @n: is a integer.
 *
 * Return: a line
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\' + '\n');
		}
	}
}
