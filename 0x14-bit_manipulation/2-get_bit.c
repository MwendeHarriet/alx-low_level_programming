#include "main.h"

/**
 * get_bit -returns value of bit at given index
 * @n: input
 * @index: index of bit to retrieve
 * Return: value of bit or -1 if error
 * occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int binary_num;

	if (index > 63)
		return (-1);

	binary_num = (n >> index) & 1;

	return (binary_num);
}
