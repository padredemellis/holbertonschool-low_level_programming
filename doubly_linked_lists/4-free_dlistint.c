#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - libera la memoria de todos los nodos añadidos
 * @head: puntero a cabeza de lista
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	dlistint_t *next_node;

	while (tmp != NULL)
	{
		next_node = tmp->next;
		free(tmp);
		tmp = next_node;
	}
}
