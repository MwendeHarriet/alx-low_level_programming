#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* check_num - check - string there are digit
* @str: array str
*
* Return: 0
*/
int check_num(char *str)
{
	/*declaring variables*/
	unsigned int count;

	count = 0;

	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*check if str there are digit*/
	{
		return (0);
		}
			count++;
		}
		return (1);
	}
	/**
	* main -Entry point of the programme that
	* prints the name of the programme
	* @argc: argument count
	* @argv: argument vector
	*
	* Return: 0
	*/


	int main(int argc, char *argv[])
{
	/*declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

		while (count < argc) /*goes through the entire array*/
		{
			if (check_num(argv[count]))
			{
				str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
				sum += str_to_int;
			}
			/*Condition if one of the number contains symbols that are not digits*/
			else
			{
				printf("Error\n");
				return (1);
			}
			count++;
		}
		printf("%d\n", sum);
		return (0);
}
