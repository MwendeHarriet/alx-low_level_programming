#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*sum_them_all -returns sum of all its parameters
*description -returns sum of all its parameters
*@n: first parameter
*@...: any other parameters
*Return: 0 if n == 0 or sum of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list allparameters;
	unsigned int i;
	int sum = 0;

	va_start(allparameters, n);

	for (i = 0; i < n; i++)
		sum += va_arg(allparameters, int);

	va_end(allparameters);

	return (sum);
}
