#include "main.h"

/**
 * _strstr -function that locates a substring
 * @haystack: pointer to string to search in
 * @needle: pointer to substring to search for
 *
 * Return: pointer to the beginning of the located substring or 0
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;

	for (i = 0; haystack[i]; i++)
	{
		for (j = i, k = 0; needle[k] && haystack[j] == needle[k]; j++, k++)
		{
			;
		}
		if (needle[k] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}

