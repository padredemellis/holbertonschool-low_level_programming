#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copia una cadena de texto de `src` a `dest`.
 * @dest: Donde vamos a copiar la cadena.
 * @src: La cadena que queremos copiar.
 * Return: Un puntero a `dest`.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
