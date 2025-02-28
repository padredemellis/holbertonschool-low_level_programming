#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: Donde vamos a copiar la cadena.
 * @n: La cadena que queremos copiar.
 * Return: El array al reves.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int *start = a;
	int *end = a + n - 1;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end++;
	}
}

