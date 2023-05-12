#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to string to search
 * @accept: pointer to the string of characters to match
 *
 * Return: bytes in prefix of substring from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}

	return (len);
}
