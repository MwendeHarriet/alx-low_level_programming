#include <stdio.h>
#include <stdlib.h>

/**
* main -prints opcodes of its own main function
*@argc: argument counter
*@argv: argument vector
*
*Return: on success 0 on success or 1 for incorrect
*number of arguments or 2 for negative number of bytes
*/

int main(int argc, char *argv[])
{
	int i;
	int n_ofbytes;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_ofbytes = atoi(argv[1]);

	if (n_ofbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (i = 0; i < n_ofbytes; i++)
	{
		if (i == n_ofbytes - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}

