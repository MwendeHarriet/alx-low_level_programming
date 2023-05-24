#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"

/**
*int_index- searches for integer in array
*description -searches for integer in array
*@array: pointer to array
*@size: elements in array
*@cmp: pointer to function used to compare values
*Return: on success, index of first element or -1
*if there are no matches
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
