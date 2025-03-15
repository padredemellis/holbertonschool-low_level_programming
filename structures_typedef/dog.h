#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Estructura que representa un perro
 * @name: Nombre del perro (string)
 * @age: Edad del perro (float)
 * @owner: Dueño del perro (string)
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
