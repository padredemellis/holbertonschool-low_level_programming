#include<stdio.h>
#include "main.h"
/**
 * jack_bauer - Mostrar el ultimo numero.
 * void: iterar entre las horas.
 *
 * Return: abs(n) %10.
 */
void jack_bauer(void)
{
	int hora = 0;
	int minuto;

	while (hora < 24)
	{
		minuto = 0;
		while (minuto < 60)
		{
			_putchar((hora / 10) + '0');
			_putchar((hora % 10) + '0');
			_putchar(':');
			_putchar((minuto / 10) + '0');
			_putchar((minuto % 10) + '0');
			_putchar('\n');
			minuto++;
		}
		hora++;
	}
}
