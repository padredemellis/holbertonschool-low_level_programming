#include <stdio.h>
/**
* main - Print the alphabet
* Description: Print the entire alphabet with putchar
* Return: return 0
*/
int main(void)
{
	char i = 'a';
	char imayus = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (imayus <= 'Z')
	{
		putchar(imayus);
		imayus++;
	}
	putchar('\n');

	return (0);
}
