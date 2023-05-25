#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all -returns sum of all its paramters
* @n: number of paramters passed to function
* @...: paramters to calculate the sum of
*
* Return: if n == 0 - 0 or
*	sum of all parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list allp;
	unsigned int i, sum = 0;

	va_start(allp, n);

	for (i = 0; i < n; i++)
		sum += va_arg(allp, int);

	va_end(allp);

	return (sum);
}

