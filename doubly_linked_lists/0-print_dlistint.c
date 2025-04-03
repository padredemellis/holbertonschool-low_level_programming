#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_dlistint - imprime todos los elementos de la lista list_t
 * @h: puntero a la primera ubicacion
 *
 * Return: cantidad de nodos
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
