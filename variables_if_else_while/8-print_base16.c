#include <stdio.h>
/**
* main - Print the Hexadecimal
* Description: Print the entirprints all the numbers of base 16 in lowercase
* Return: return 0
*/
int main(void)
{
	char n = 0;
	char c = 'a';

	while (n < 10)
	{
		putchar (n + '0');
		n++;
	}
	while ('a' <= 'f')
	{
		putchar (c);
		c++;
	}
	putchar ('\n');

	return (0);
}
