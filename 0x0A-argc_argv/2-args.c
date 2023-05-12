#include <stdio.h>
#include "main.h"

/**
 * main -prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int n = 0;

	for (n < argc; n++)
	{
		printf("%s\n", argv[n])
	}
	return (0);
}
