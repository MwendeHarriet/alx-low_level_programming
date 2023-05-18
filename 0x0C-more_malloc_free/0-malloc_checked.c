#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -allocates memory using malloc
 *@b: integer input
 * return: on success retuns a pointer to allocated memory
 *	on failure exits with value 98
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
