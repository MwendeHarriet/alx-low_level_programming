#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints sum of two diagonals
 * @a: matrix of integers.
 * @size: size of the matrix.
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int var, sum1 = 0, sum2 = 0;

	for (var = 0; var < size; var++)
	{
		sum1 += *(a + var * size + var);
		sum2 += *(a + var * size + (size - var - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
