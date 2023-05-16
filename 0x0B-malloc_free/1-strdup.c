#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -duplicates a string to new memory space
 * description -returns pointer to d new string which is
 * a duplicate of str
 * @str: string to duplicate
 *
 * return: returns pointer to duplicated string
 * or returns NULL on failure
 */

char *_strdup(char *str)
{
	if (str == NULL)
	return (NULL);
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	i++;

	char *s;

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
	return (NULL);

	for (j = 0; str[j]; j++)
	s[j] = str[j];

	return (s);
}
