#include "main.h"

/**
 *__pow_recursion(int x, int y)- raises x to y
 *
 *@x: value to raise
 *@y: power to raise at
 *
 *Return: x power to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	else

	return (x * _pow_recursion(x, y - 1));
}
