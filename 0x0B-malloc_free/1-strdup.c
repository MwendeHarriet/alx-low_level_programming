#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -duplicates a string
 * description -returns pointer to d new string which is
 * a duplicate of str
 * @str: string to duplicate
 *
 * return: pointer to duplicate string or NULL for insufficient memory
 */

char *_strdup(char *str)
{
	if (str == NULL)
	return (NULL);

	int len = 0;
	char *new_str = NULL;

	while (str[len] != '\0')
	len++;

	new_str = malloc((len + 1) * sizeof(char));

	if (new_str != NULL)
	{
		for (int i = 0; i <= len; i++)
		new_str[i] = str[i];
	}
	return (new_str);
}
