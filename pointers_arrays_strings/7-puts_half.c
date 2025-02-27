#include "main.h"
/**
 * puts_half - Make a function that prints half of a string.
 * @str: Is a ponter.
 */
void puts_half(char *str)
{
	int len = 0, n = 0, i = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1 / 2);
	}
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
