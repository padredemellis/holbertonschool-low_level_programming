#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calcula la longitud de una cadena
 * @s: Cadena de entrada
 * Return: Longitud de la cadena
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * _strcpy - Copia una cadena
 * @dest: Destino de la copia
 * @src: Fuente a copiar
 * Return: Puntero a dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - Crea una nueva estructura dog_t
 * @name: Nombre del perro
 * @age: Edad del perro
 * @owner: Dueño del perro
 * Return: Puntero a la nueva estructura, NULL si falla
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	char *n_copy, *o_copy;
	int n_len, o_len;

	if (!name || !owner)
	{
		return (NULL);
	}
	n_len = _strlen(name) + 1;
	o_len = _strlen(owner) + 1;
	new_d = malloc(sizeof(dog_t));
	if (!new_d)
	{
		return (NULL);
	}
	n_copy = malloc(n_len);
	if (!n_copy)
	{
		free(new_d);
		return (NULL);
	}
	_strcpy(n_copy, name);
	o_copy = malloc(o_len);
	if (!o_copy)
	{
		free(n_copy);
		free(new_d);
		return (NULL);
	}
	_strcpy(o_copy, owner);
	new_d->name = n_copy;
	new_d->age = age;
	new_d->owner = o_copy;

	return (new_d);
}
