#include "main.h"

/**
 * _strchr -function that locates a character in a string
 * @s: pointer to string to search
 * @c: character to search for
 *
 * Return: pointer to the character c in the string s/
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

