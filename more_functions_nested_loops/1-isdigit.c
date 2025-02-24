#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Verify if it is digit or not.
 * @c: is the variable to be checked.
 *
 * Return: 1 is digit, 0 not digit
 */
int _isdigit(int c)
{
	if (c >='0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}

