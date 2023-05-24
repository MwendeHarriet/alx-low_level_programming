#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a given function.
 * @func: Pointer to the function.
 * @num_bytes: Number of bytes to print.
 */

void print_opcodes(void (*func)(void), int num_bytes)
{
	int i;
	unsigned char *opcodes = (unsigned char *)func;

	for (i = 0; i < num_bytes; i++)
		printf("%02x\t", opcodes[i]);

	printf("\n");
}

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 *
 * Return: 0 on success, 1 for incorrect number of arguments,
 *         and 2 for negative number of bytes.
 */

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(main, num_bytes);

	return (0);
}

