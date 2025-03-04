#include "main.h"
#include <stdio.h>
/**
 * _strstr - Write a function that locates a substring.
 * @haystack: The pointer first cadena.
 * @needle: The pointer to needle
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
