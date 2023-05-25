#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_strings -prints strings followed by \n
* @separator: string between strings
* @n: number of strings passed to function
* @...: parameters
*
*Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s_params;
	char *str;
	unsigned int i;

	va_start(s_params, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(s_params, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(s_params);
}
