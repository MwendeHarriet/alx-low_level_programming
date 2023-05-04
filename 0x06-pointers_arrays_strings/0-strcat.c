#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: input value
* @src: input value
*
* Return: void
*/

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\n')
		{
		p++;
		}

	while (*src != '\0')
		{
		*p = *src;
		p++;
		src++;
		}
	*p = '\0';
	return (dest);
}
