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

	while (i <= 'z' && imayus <= 'Z')
	{
		putchar(i);
		putchar(imayus);
		i++;
		imayus++;
	}
	putchar('\n');

	return (0);
}
