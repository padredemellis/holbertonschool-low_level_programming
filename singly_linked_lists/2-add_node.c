#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Calcula la longitud de una cadena
 * @s: Cadena a medir
 * Return: Longitud de la cadena
 */
int _strlen(const char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * add_node - Añade un nuevo nodo al principio de la lista
 * @head: Puntero doble al inicio de la lista
 * @str: Cadena para el nuevo nodo
 * Return: Dirección del nuevo nodo o NULL si falla
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nuevo;

	if (str == NULL)
		return (NULL);

	nuevo = malloc(sizeof(list_t));
	if (nuevo == NULL)
		return (NULL);

	nuevo->str = strdup(str);
	if (nuevo->str == NULL)
	{
		free(nuevo);
		return (NULL);
	}

	nuevo->len = _strlen(nuevo->str);
	nuevo->next = *head;
	*head = nuevo;

	return (nuevo);
}
