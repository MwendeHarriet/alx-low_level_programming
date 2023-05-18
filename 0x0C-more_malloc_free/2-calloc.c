#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _memset -fills memory with a constant byte
*@s: pointer to memory area to fill
*@b: char value to copy
*@n: number of times to copy b
*
* Return: pointer to the memory area s
 */
void *_memset(void *s, int b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

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

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
