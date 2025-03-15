#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Crea una nueva estructura dog_t
 * @name: Nombre del perro
 * @age: Edad del perro
 * @owner: Dueño del perro
 * Return: Puntero a la nueva estructura, NULL si falla
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	int name_len, owner_len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_len = strlen(name) + 1;
	name_copy = malloc(name_len * sizeof(char));
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(name_copy, name);

	owner_len = strlen(owner) + 1;
	owner_copy = malloc(owner_len * sizeof(char));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
