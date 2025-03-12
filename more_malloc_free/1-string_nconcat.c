#include <stdlib.h>

/**
 * _strlen - Calcula la longitud de una cadena de caracteres.
 * @s: La cadena de caracteres.
 *
 * Return: La longitud de la cadena.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * string_nconcat - Concatena dos cadenas de caracteres.
 * @s1: La primera cadena de caracteres.
 * @s2: La segunda cadena de caracteres.
 * @n: El número máximo de bytes de s2 a concatenar.
 *
 * Return: Un puntero a la cadena concatenada, o NULL si falla la asignación.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	concat = malloc((len1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';
	return (concat);
}
