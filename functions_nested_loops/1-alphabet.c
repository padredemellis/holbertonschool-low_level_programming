#include "main.h"

/**
 * print_alphabet - Imprime el alfabeto en minúsculas.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
