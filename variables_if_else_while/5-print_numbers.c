#include <stdio.h>
/**
* main - Print digit numbers
* Description: Prints all single digit numbers of base 10 starting from 0
* Return: return 0
*/
int main(void)
{
	int n = 0;
	while (n < 10)
	{
		putchar (n + '0');
		n++;
	}
	putchar ('\n');

	return (0);
}
