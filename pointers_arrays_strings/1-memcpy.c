#include <stdio.h>
#include "main.h"
/**
 * _memcpy - a function that fills memory with a constant byte..
 * @dest: is a pointer copy array.
 * @src: is array original
 * @n: is a n elements
 * Return: dest = src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

