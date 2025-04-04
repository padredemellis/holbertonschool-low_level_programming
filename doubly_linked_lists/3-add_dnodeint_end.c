#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint_end - Añade un nuevo nodo al final de la lista.
 * @head: Doble puntero al inicio de la lista.
 * @n: Valor entero para el nuevo nodo.
 * Return: Dirección del nuevo nodo, o NULL si falla.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *otro_nodo;
	dlistint_t *temp;

	otro_nodo = malloc(sizeof(dlistint_t));

	if (otro_nodo == NULL)
		return (NULL);

	otro_nodo->n = n;
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
		otro_nodo->prev = temp;
	}

	return (otro_nodo);
}
