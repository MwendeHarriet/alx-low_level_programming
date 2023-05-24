#include <stdio.h>
#include <stdlib.h>

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
	int num_bytes, i;
	unsigned char *ptr;
	void (*main_ptr)(void);

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

	main_ptr = &main;
	ptr = (unsigned char *)main_ptr;

	for (i = 0; i < num_bytes; i++)
		printf("%02hhx ", ptr[i]);

	printf("\n");

	return (0);
}

