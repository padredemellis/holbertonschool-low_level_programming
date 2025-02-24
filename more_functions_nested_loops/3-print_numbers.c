#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: 1 is digit, 0 not digit
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
}

