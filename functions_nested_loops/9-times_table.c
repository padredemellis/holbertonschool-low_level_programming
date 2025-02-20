#include<stdio.h>
#include "main.h"
/**
 * times_table - Mostrar el ultimo numero.
 * void: hacer cuentas.
 *
 * Return: Table 0-9.
 *
 */
void times_table(void)
{
	int fila, columna, resultado;

	for (fila = 0; fila <= 9; fila++)
	{
		for (columna = 0; columna <= 9; columna++)
		{
			resultado = fila * columna;

			if (columna != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (resultado < 10 && columna != 0)
			{
				_putchar(' ');
			}

			if (resultado >= 10)
			{
				_putchar((resultado / 10) + '0');
			}

			_putchar((resultado % 10) + '0');
		}
		_putchar('\n');
	}
}

