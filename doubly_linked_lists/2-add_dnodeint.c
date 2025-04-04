#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint - Añade un nuevo nodo al principio de la lista
 * @head: Puntero doble al inicio de la lista
 * @n: Entero para el nuevo nodo
 * Return: Dirección del nuevo nodo o NULL si falla
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}
