#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - Duplica una string con memoria dinamica.
* @str: Es la string a duplicar.
* Return: String duplicada, o NULL si size es  o falla la asignacion.
*
* _strlen - Cuenta los caracteres
* @s:es la string a la que apunta
* Description - Devuelve la cantidad de caracteres.
*/
int _strlen(char *s);
char *_strdup(char *str)
{
	int len, i;
	char *dup;

	len = (_strlen(str));
	dup = malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '0')
	{
		len++;
	}
	return (len);
}
