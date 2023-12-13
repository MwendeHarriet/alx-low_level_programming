#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jump search function *
 * @array: array to search in
 * @size: size of the array
 * @value: value to search in the array
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int i, j, k, prev;

	if (array == NULL || size == 0)
		return (-1);

	j = (int)sqrt((double)size);
	k = 0;
	prev = i = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		k++;
		prev = i;
		i = k * j;
	} while (i < (int)size && array[i] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, i);

	for (; prev <= i && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
