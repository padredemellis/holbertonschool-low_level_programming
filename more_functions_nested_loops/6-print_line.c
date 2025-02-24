#include <stdio.h>
#include "main.h"
/**
 *print_line - Multiplies two integers.
 * @n: is a integer.
 *
 * Return: a line
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
