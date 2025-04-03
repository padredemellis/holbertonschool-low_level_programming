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
 * add_node_end - Añade un nuevo nodo al final de la lista
 * @head: Puntero doble al inicio de la lista
 * @str: Cadena para el nuevo nodo
 * Return: Dirección del nuevo nodo o NULL si falla
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *otro_nodo;
	list_t *temp;

	if (str == NULL)
		return (NULL);

	otro_nodo = malloc(sizeof(list_t));
	if (otro_nodo == NULL)
		return (NULL);

	otro_nodo->str = strdup(str);
	if (otro_nodo->str == NULL)
	{
		free(otro_nodo);
		return (NULL);
	}

	otro_nodo->len = _strlen(otro_nodo->str);
	otro_nodo->next = NULL;

	if (*head == NULL)
	{
		*head = otro_nodo;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = otro_nodo;
	}

	return (otro_nodo);
}
