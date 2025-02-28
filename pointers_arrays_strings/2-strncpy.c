#include "main.h"
#include <stdio.h>
/**
 * _strncpy - concatenates two strings it will use at most n bytes from src
 * @dest: pointer a string final.
 * @src: pointer a string original
 * @n: n limits the number of characters to be copied
 * Return:a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
