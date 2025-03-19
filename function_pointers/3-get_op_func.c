#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Selecciona la función de operación correcta.
 * @s: El operador pasado como argumento.
 *
 * Return: Un puntero a la función que corresponde al operador dado.
 * Si s no coincide con ninguno de los operadores esperados, devuelve NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
