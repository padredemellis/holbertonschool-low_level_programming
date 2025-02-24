#include "main.h"
#include <stdio.h>
/**
 * _isupper - Verify if it is capital or not.
 * @c: is the variable to be checked.
 *
 * Return: 1 is upper, 0 not upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
