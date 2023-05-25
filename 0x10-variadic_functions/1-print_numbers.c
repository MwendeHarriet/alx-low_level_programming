#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_numbers -prints numbers followed by \n
*description -prints numbers followed by \n
*@separator: string between numbers
*@n: integres passed to function
*@...: parameters
*Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;

	va_start(params, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(params, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(params);
}

