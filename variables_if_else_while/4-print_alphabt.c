#include <stdio.h>
/**
* main - Print the alphabet
* Description: Print the entire alphabet except q and e
* Return: return 0
*/
int main(void)
{
	char i = 'a';
		while (i <= 'z')
		{
			if (i != 'e' && i != 'q')
			{
				putchar(i);
			}
			i++;
		}
	putchar('\n');
	return (0);
}
