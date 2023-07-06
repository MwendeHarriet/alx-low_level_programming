#include "main.h"

/**
 * flip_bits -returns number of bits needed to be
 * flipped to get from one number to another
 * @n: input
 * @m: input
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive_or_result = n ^ m;

	unsigned int num_of_bits_flip = 0;

	while (exclusive_or_result)
	{
		num_of_bits_flip += exclusive_or_result & 1;
		exclusive_or_result >>= 1;
	}

	return (num_of_bits_flip);
}
