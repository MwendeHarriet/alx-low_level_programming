#include <stdio.h>
#include "main.h"
#include <stdli.h>
/**
 * create_array - function that creates an array of characters
 * ,initializes it with a specific character
 * description -creates an array and assigns c
 * @size: size of the array
 * @c: specific character
 *
 * Return: pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

		if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
