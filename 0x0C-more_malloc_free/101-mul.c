#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * check_zero - checks if any of the numbers is zero
 * @argv: argument vector
 *
 * Return: no return
 */
void check_zero(char *argv[])
{
	int i;
	int isNum1Zero = 1;
	int isNum2Zero = 1;

	for (i = 0; argv[1][i]; i++)
	{
		if (argv[1][i] != '0')
		{
			isNum1Zero = 0;
			break;
		}
	}

	for (i = 0; argv[2][i]; i++)
	{
		if (argv[2][i] != '0')
		{
			isNum2Zero = 0;
			break;
		}
	}

	if (isNum1Zero || isNum2Zero)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * initialize_array - initializes a character array with zeros
 * @arr: character array
 * @len: length of the character array
 *
 * Return: pointer to a character array
 */
char *initialize_array(char *arr, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		arr[i] = '0';
	}
	arr[len] = '\0';

	return (arr);
}

/**
 * check_number - checks the length and base of a number
 * @argv: argument vector
 * @numIndex: index of the number in the argument vector
 *
 * Return: length of the number
 */
int check_number(char *argv[], int numIndex)
{
	int len;

	for (len = 0; argv[numIndex][len]; len++)
	{
		if (!isdigit(argv[numIndex][len]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	return (len);
}

/**
 * main - entry point
 * Multiplies two positive numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int len1, len2, resultLen, carry, add, addLow, i, j, k, currentAdd;
	char *resultNum;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	len1 = check_number(argv, 1);
	len2 = check_number(argv, 2);
	check_zero(argv);
	resultLen = len1 + len2;
	resultNum = malloc(resultLen + 1);

	if (resultNum == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	resultNum = initialize_array(resultNum, resultLen);
	k = resultLen - 1;
	i = len1 - 1;
	j = len2 - 1;
	carry = addLow = 0;

	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addLow > 0)
			{
				add = (resultNum[k] - '0') + addLow;
				if (add > 9)
				{
					resultNum[k - 1] = (add / 10) + '0';
				}
				resultNum[k] = (add % 10) + '0';
			}
			i = len1 - 1;
		}
	}
}
