#include <stdio.h>

int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		return (0);
	}

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
