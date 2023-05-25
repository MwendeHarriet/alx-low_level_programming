#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all -returns sum of all its parameters
* @n: number of parameters passed to function
* @...: variable number of paramters to calculate the sum of
* Return: if n == 0 - 0 or
* otherwise sum of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list allparameters;
	unsigned int i, sum = 0;

	va_start(allparameters, n);

	for (i = 0; i < n; i++)
		sum += va_arg(allparameters, int);

	va_end(allparameters);

	return (sum);
}

