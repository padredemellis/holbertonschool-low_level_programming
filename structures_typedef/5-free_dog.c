#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Libera la memoria asignada a un dog_t.
 * @d: Puntero a la estructura dog_t a liberar.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
