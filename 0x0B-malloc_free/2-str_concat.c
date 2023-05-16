#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - get ends of input and add together for size
 * description - concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 *
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[ci] != '\0')
		j++;

	c = malloc(sizeof(char) * (i + ci + 1));

	if (c == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		c[i] = s2[j];
			i++;
			j++;
	}
	c[i] = '\0';

	return (c);
}
