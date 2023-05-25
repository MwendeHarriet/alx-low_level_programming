#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_numbers -prints numbers followed by \n
*description -prints numbers followed by \n
*@separator: string between numbers
*n: integres passed to function
*@...: parameters
*Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list allp;
	int nums;
	unsigned int i;

	va_start(allp, n);

	for (i = 0, i < n; i++)
	{
		nums = va_args(allp, int);
			printf("%d", va_args(allp, int);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(allp);

	printf("\n");
}
