#include "main.h"

int actual_sqrt_recursion(int n, int m);

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: given number to calculate square root
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recursion to find natural
 * @n: number to calculate the sqaure root of
 * @m: value input
 *
 * Return: the square root
 */

int actual_sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);

	if (m * m == n)
		return (m);

	return (actual_sqrt_recursion(n, m + 1));
}

