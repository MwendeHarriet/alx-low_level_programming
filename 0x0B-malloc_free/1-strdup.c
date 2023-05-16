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
	if (str == NULL)
	return (NULL);

	int i = 0;
	int j = 0;

	while (str[i] != '\0')
		i++;

	char *s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
	return (NULL);

	for (j = 0; str[j]; j++)
	s[j] = str[j];

	return (s);
}

