#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * @argc: número de argumentos que se pasaron al programa
 * @argv:un array de punteros a caracteres (strings).
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
