#include <stdio.h>
/**
* main - Print the alphabet
* Description: Print the entire alphabet with putchar
* Return: return 0
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar (n + '0');
		if (n < 10)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
