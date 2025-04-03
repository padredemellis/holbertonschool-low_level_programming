#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list_t list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		node_count++;
		temp = temp->next;
	}
	return (node_count);
}
