#include "main.h"

/**
 *_strlen_recursion(char *s)- returns string length
 *
 *@s: string to count
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
