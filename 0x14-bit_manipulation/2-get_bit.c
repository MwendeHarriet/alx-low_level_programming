#include "main.h"

/**
 * get_bit -returns value of bit at given index
 * @n: input
 * @index: index of bit to retrieve
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long binary_num = 1UL << index;

	if ((n & binary_num) != 0)
		return (1);

	else
		return (0);
}
