#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*string_nconcat -concatenates two strings
*description- function that concatenates two strings
*@s1:string to attach
*@s2:string concatenated from
*@n: number of bytes from s2 to concatenate
*Return: pointer to the concatenated string
*	or NULL on failure
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int length1;
	unsigned int length2;
	char *cs;

	length1 = 0;

	length2 = 0;

	if (s1 != NULL)
	{
		while (s1[length1] != '\0')
			length1++;
	}

	if (s2 != NULL)
	{
		while (s2[length2] != '\0')
			length2++;
	}

	if (n >= length2)
		n = length2;

	cs = malloc(sizeof(char) * (length1 + n + 1));

	if (cs == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		cs[i] = s1[i];

	for (j = 0; j < n; j++)
		cs[i++] = s2[j];

	cs[i] = '\0';

	return (cs);
}
