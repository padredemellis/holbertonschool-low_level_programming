#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Imprime un carácter.
 * @args: Lista de argumentos variádicos.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Imprime un entero.
 * @args: Lista de argumentos variádicos.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Imprime un flotante.
 * @args: Lista de argumentos variádicos.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Imprime una cadena.
 * @args: Lista de argumentos variádicos.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Imprime cualquier cosa basada en un formato dado.
 * @format: Lista de tipos de argumentos pasados a la función.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	const char t_arg[] = "cifs";
	void (*f[])(va_list) = {print_char, print_int, print_float, print_string};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j])
			{
				f[j](args);
				if (format[i + 1])
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
