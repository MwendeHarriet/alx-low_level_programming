#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _atoi - convert a string to an integer
* @s: string to convert
*
* Return: the converted integer
*/
int _atoi(char *s)
{
	int a, b, c, d, digit, s_length;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	digit = 0;
	s_length = 0;

	while (s[s_length] != '\0')
	s_length++;

	while (a < s_length && d == 0)
	{
		if (s[a] == '-')
		++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';

			if (d % 2)
			digit = -digit;

			c = c * 10 + digit;
			d = 1;
		}

	a++;
	}

	return (c);
}

/**
 * main - multiplies two numbers and stores
 * result in an integer
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int x, y, result;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);
	return (0);
}
