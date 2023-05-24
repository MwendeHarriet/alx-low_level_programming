#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"

/**
*get_op_func -selects correct function to perform
*the operation asked by the user
*@s: operator passed as argument
*
*Return: on success, pointer to function corresponding
*	on failure, NULL
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
