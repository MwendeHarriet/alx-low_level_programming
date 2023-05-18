#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 **malloc_checked -allocates memory using malloc
 *description - allocates memory using malloc
 *@b: memory size
 *Return: * Return: On success, returns a pointer to the allocated memory
 *On failure, exits the program with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
