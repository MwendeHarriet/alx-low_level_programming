#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
*print_name -prints a name
*description -prints a name
*@name: string of characters
*@f: pointer to function
*
*Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
