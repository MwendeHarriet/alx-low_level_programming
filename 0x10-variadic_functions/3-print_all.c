#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
*print_all -prints values of different types based on given format
*@format: string specifying types of arguments passed to function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *sep;
	char *sep = "";

	va_list l_params;

	va_start(l_params, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(l_params, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(l_params, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(l_params, double));
					break;
				case 's':
					str = va_arg(l_params, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(l_params);
}
