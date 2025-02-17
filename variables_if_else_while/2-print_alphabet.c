#include<stdio.h>
/**
 * main - Print the alphabet
 * Description: Print the entire alphabet with putchar
 * Return: return 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar (i);
		i++;
	}		putchar('\n');

		return (0);
}
