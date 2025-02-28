#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: pointer a string final.
 * @src: pointer a string original
 *
 * Return:a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		*p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		*p++;
		*src++;
	}
	*src = '\0';

	return (dest);
}
