#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
*array_iterator -prints elements in arry
*description -executes function given as parameter on
*each element of an array
*@array: pointer to array
*@size: size of array
*@action: pointer to function to execute on elements
*Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
