#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Imprime strings y luego un salto de linea.
 * @n: Número de parámetros.
 * @separator: salto de linea.
 * @...: Parámetros variables.
 *
 * Return: La suma de todos los parámetros, o 0 si n == 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
