#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint -converts binary number to unsigned int
 * @b: string
 * Return: converted number or 0 if there is 1 or more
 * chars in string b that is not 0 or 1 and b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int converted_num = 0;

	if (b == NULL)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);

	       converted_num = 2 * converted_num + (b[count] - '0');
	}

	return (converted_num);
}
