#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*count_words - function that counts words in string
*description -counts number of words in a string
*@str: input string
*
*return: the number of words in string.
*/

int count_words(char *str)
{
	int count = 0;
	int i = 0;
	int is_word = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && !is_word)
		{
			is_word = 1;
			count++;
		}
		else if (str[i] == ' ')
		{
			is_word = 0;
		}
		i++;
	}

	return (count);
}

/**
* strtow - splits string into words
* @str: input string
*
* Return: pointer to an array of strings
*         returns NULL if str == NULL or str == "" or if it fails
*/

char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	return (NULL);

	int word_count = count_words(str);

	if (word_count == 0)
	return (NULL);

	char **word_array = (char **)malloc((word_count + 1) * sizeof(char *));

	if (word_array == NULL)
	return (NULL);

	int i = 0;
	char *token = strtok(str, " ");

	while (token != NULL)
	{
		word_array[i] = (char *)malloc((strlen(token) + 1) * sizeof(char));

		if (word_array[i] == NULL)
	{
		for (int j = 0; j < i; j++)
		free(word_array[j]);
		free(word_array);
		return (NULL);
	}
	strcpy(word_array[i], token);
	token = strtok(NULL, " ");
	i++;
	}
	word_array[i] = NULL;

	return (word_array);
}

