#include "main.h"
/**
 * positive or negative- tests for positive or negative
 *
 * @i: the number to be tested
 *
 * Return: Always 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
}
