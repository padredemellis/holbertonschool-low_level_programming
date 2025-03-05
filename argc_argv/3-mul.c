#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - check the code
 * @argc: número de argumentos que se pasaron al programa
 * @argv:un array de punteros a caracteres (strings).
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int resultado;

	if (argc != 3)
	{
		printf("Error %s\n", argv[0]);
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	resultado = num1 * num2;

	printf("%d\n", resultado);

	return (0);
}
