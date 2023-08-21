#include "main.h"

/**
 * _strpbrk - function that searches a string for a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the string of bytes to search for
 *
 * Return: pointer to the byte in s that matching bytes in accept or 0
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}

