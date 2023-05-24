#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
*main -entry point
*@argc: argument counter
*@argv: argument vector
*
*Return: on success 0 or 98 for wrong number
*of arguments or 99 for invalid operator
*or 100 for division by zero
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);

	op = argv[2];

	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}

