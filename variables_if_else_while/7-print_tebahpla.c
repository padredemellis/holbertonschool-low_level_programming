#include<stdio.h>
/**
 * main - Print the alphabet the other way around
 * Description: Print the entire alphabet with putchar
 * Return: return 0
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar (i);
		i--;
	}		putchar('\n');

		return (0);
}
