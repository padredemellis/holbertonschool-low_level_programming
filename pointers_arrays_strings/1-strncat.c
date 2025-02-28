#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings it will use at most n bytes from src
 * @dest: pointer a string final.
 * @src: pointer a string original
 * @n: n limits the number of characters to be copied
 * Return:a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (n-- > 0 && *src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
