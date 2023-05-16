#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string to a new memory space.
 * @str: the string to duplicate.
 *
 * Return: returns a pointer to the duplicated string,
 *         or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *s;

	s = malloc(sizeof(char) * (i + 1));

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	if (s == NULL)
	return (NULL);

	for (j = 0; str[j]; j++)
	s[j] = str[j];

	return (s);
}

