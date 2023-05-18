#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*_realloc -reallocates memory block with malloc and free
*description- reallocates memory block with malloc and free
*@ptr: pointer to previously allocated memory
*@old_size: size of ptr
*@new_size: new size of new memory block
*Return: newly allocated memory block pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *op;
	char *p1;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size);

	if (!p1)
		return (NULL);

	op = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p1[i] = op[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p1[i] = op[i];
	}

	free(ptr);

	return (p1);
}
