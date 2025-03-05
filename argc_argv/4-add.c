#include <stdio.h>
#include <stdlib.h>
/**
 * is_positive_number - Verifica si un string es un número positivo.
 * @str: String a validar.
 * Return: 1 si es válido, 0 si no.
 */
int is_positive_number(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return 0;
		i++;
	}
	return 1;
}

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return 0;
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return 1;
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return 0;
}
