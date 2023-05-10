#include "main.h"

int test_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - sees if string is palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (test_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of string
 * @s: string to evaluate
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * test_palindrome - test characters recursively for palindrome
 * @s: string to check
 * @i:input
 * @len: length of string
 *
 * Return: 1 if palindrome, 0 if not
 */
int test_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	if (i >= len)
		return (1);

	return (test_palindrome(s, i + 1, len - 1));
}

