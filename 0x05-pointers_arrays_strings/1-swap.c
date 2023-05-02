#include "main.h"
/**
*swap_int - will take two integers and swap them
*@a: integer to be swap
*@b: integer to be swap
*Return: a, b
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

