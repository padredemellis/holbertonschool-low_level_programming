#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Libera la memoria de una lista list_t
 * @head: Puntero doble al inicio de la lista
 *
 * Descripción: Recorre cada nodo liberando la memoria de
 * la cadena y del propio nodo, finalmente establece head a NULL
 */
void free_list(list_t **head)
{
	list_t *current;
	list_t *next;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}

	*head = NULL;
}
