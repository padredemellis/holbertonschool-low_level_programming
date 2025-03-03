#include <stdio.h>
#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: is a pointer to array.
 * @accept: is a pointer to array
 * Return: len array
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *temp_accept;

	while (*s != '\0')
	{
		temp_accept = accept;
		while (*temp_accept != '\0')
		{
			if (*s == *temp_accept)
			{
				len++;
				break;
			}
			temp_accept++;
		}
		if (*temp_accept == '\0')
		{
			return (len);
		}
		s++;
	}
	return (len);
}
