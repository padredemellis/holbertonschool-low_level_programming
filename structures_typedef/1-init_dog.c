#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Inicializa una variable de tipo struct dog
 * @d: Puntero a la estructura a inicializar
 * @name: Nombre del perro
 * @age: Edad del perro
 * @owner: Dueño del perro
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
