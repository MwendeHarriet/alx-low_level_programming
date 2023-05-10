#include "main.h"

int true_prime_number(int n, int m);

/**
 * is_prime_number - tells if integer is prime number or not
 * @n: value to test
 *
 * Return: 1 if n is a prime number and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (true_prime_number(n, n - 1));
}

/**
 * true_prime_number - calculates prime number in recursion
 * @n: value to test
 * @m: value input
 *
 * Return: 1 if n is prime number and 0 if not
 */

int true_prime_number(int n, int m)
{
	if (m == 1)
		return (1);

	if (m % m == 0 && m > 0)
		return (0);

	return (true_prime_number(n, m - 1));
}

