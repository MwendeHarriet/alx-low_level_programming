#include "main.h"
/**
* puts2 - prints every other character
* starting with the first one
* @str: input
* Return: print
*/
void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *k = str;
	int l;

	while (*k != '\0')
	{
		k++;
		i++;
	}
	j = i - 1;
	for (l = 0 ; l <= j ; l++)
	{
		if (l % 2 == 0)
	{
		_putchar(str[l]);
	}
	}
	_putchar('\n');
}

