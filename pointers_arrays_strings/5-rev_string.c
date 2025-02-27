#include "main.h"
/**
 * rev_string - write a string in reverse.
 * @s: The string to be printed in reverse.
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char temp;

	while (s[len] != '\0')
		len++;
	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
		i++;
	}
}
