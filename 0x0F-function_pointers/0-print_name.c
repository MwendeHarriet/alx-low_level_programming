#include <stdio.h>
#include <stdlib.h>
#include "pointers_functions.h"

/**
*print_name -prints a name
*description -prints a name
*@name: string of characters
*@f: pointer to function
*(char *): specifies type of parameter
*Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		return (void);

	f(name);
}
