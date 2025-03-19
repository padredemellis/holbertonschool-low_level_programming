#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Realiza operaciones aritméticas básicas.
 * @argc: Número de argumentos.
 * @argv: Array de argumentos.
 *
 * Return: 0 si éxito, 98, 99, 100 si error.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	func = get_op_func(op);
	if (func == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((op[0] == '/' || op[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
