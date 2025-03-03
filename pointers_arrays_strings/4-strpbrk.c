#include <stdio.h>
#include "main.h"
/**
 * _strpbrk -  a function that searches a string for any of a set of bytes..
 * @s: is a pointer to array.
 * @accept: is a pointer to array
 * Return: array
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return (NULL);
}
