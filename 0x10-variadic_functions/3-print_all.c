#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
*print_all -prints values of different types based on given format
*@format: string specifying types of arguments passed to function
*/

void print_all(const char * const format, ...)
{
	int i;
	char *str;
	char *sep = "";

	va_list values;

	va_start(values, format);

		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(values, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(values, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(values, double));
					break;
				case 's':
					str = va_arg(values, char *);
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
	va_end(values);
	printf("\n");
}
