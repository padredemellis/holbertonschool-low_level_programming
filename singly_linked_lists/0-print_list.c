#include <stdio.h>
#include "lists.h"

/**
 * print_list - Imprime todos los elementos de una lista list_t.
 * @h: Puntero al inicio de la lista.
 *
 * Return: Número de nodos en la lista.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		node_count++;
		h = h->next;
	}
	return (node_count);
}
