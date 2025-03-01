#include "main.h"

/**
 * string_toupper - Convierte todas las letras minúsculas a mayúsculas.
 * @str: La cadena a modificar.
 *
 * Return: Puntero a la cadena modificada.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
