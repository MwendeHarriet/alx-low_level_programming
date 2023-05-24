#include <stdio.h>
#include <stdlib.h>

/**
* main -prints opcodes of its own main function
*@argc: argument counter
*@argv: argument vector
*
*Return: 0 on success 1 or incorrect number of arguments
*or 2 for negative number of bytes
*/

int main(int argc, char *argv[])
{
	int i;
	int n_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n_of_bytes = atoi(argv[1]);

	if (n_of_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *ptr = (unsigned char *)main;

	for (i = 0; i < n_of_bytes; i++)
		printf("%02x ", ptr[i]);

	printf("\n");

	return (0);
}
