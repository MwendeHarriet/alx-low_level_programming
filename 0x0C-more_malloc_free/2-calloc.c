#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*_calloc -allocates memory for an array
*description- allocates memory for an arry with malloc
*@size: size of elements in bytes
*@nmemb: number of elements in array
*Return: on sucess, pointer to allocated memory
*	on failure, NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	return (NULL);

	unsigned int total_size = nmemb * size;

	p = malloc(total_size);

	if (p == NULL)
	return (NULL);

	for (i = 0; i < total_size; i++)
	*(p + i) = 0;

	return (p);
}
