#include <stdlib.h>

/**
 * _calloc - Asigna memoria para un array usando malloc.
 * @nmemb: Número de elementos del array.
 * @size: Tamaño de cada elemento.
 *
 * Return: Un puntero a la memoria asignada, o NULL si falla la asignación.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size, i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	char_ptr = (char *)ptr;
	for (i = 0; i < total_size; i++)
		char_ptr[i] = 0;

	return (ptr);
}
