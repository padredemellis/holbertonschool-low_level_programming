#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_node - Añade un nuevo nodo al principio de una lista list_t.
* @head: Puntero doble al principio de la lista.
* @str: Cadena que se duplicará y añadirá al nuevo nodo.
*
* Return: Dirección del nuevo elemento o NULL si falló.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *nuevo;

	if (str == NULL)
	{
		return (NULL);
	}
	nuevo = malloc(sizeof(list_t));
	if (nuevo == NULL)
	{
		return (NULL);
	}
	nuevo->str = strdup(str);
	if (nuevo->str == NULL)
	{
		free(nuevo);
		return (NULL);
	}

	nuevo->len = strlen(nuevo->str);
	nuevo->next = *head;
	*head = nuevo;

	return (nuevo);
}
