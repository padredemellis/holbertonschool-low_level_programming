#include <stdio.h>
#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte..
 * @s: is a pointer to array.
 * @b: is a variable the constant byte b
 * @n: is a n elements
 * Return: a array with b
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

