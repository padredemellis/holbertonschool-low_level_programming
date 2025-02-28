#include "main.h"
#include <stdio.h>
/**
* _strcmp - Copia una cadena de texto.
 * @s1: Donde vamos a copiar la cadena.
 * @s2: La cadena que queremos copiar.
 * Return: Un puntero a `dest`.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}




