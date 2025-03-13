#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Estructura para representar un perro
 * @name: Nombre del perro (string)
 * @age: Edad del perro (float)
 * @owner: Dueño del perro (string)
 *
 * Descripción: Agrupa datos básicos de un perro.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
