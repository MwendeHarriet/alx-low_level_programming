#include "main.h"

/**
 * factorial - returns factorial of number
 *
 *@n: factorial number
 *Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
