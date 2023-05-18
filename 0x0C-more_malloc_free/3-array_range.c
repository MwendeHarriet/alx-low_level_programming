#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*array_range - creates an array of integers
*description- will create an array of integers
*@min: minimum value
*@max: maximun value
*
* Return: on success, pointer to newly created array
*	on failure, NULL
*/
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}

