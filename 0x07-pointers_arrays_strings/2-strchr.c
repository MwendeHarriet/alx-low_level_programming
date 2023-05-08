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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}

