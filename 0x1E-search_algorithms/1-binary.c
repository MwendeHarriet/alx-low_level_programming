#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - binary search function
 * @array: pointer to first element of to search in
 * @size: number of elements in array
 * @value: is the value to search for
 * Return: index of value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;

	size_t j = size - 1;

	size_t k, l;

	if (array == NULL)
		return (-1);
	while (l <= j)
	{
		printf("Searching in array: %d", array[i]);
		for (l = i + 1; l <= j; l++)
			printf(", %d", array[i]);
		printf("\n");
		k = (i + j) / 2;
		if (array[k] == value)
			return (k);
		else if (array[k] > value)
			j = k - 1;
		else
			i = k + 1;
	}
	return (-1);
}
