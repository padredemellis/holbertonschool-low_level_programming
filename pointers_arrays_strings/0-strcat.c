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
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*src = '\0';

	return (dest);
}
